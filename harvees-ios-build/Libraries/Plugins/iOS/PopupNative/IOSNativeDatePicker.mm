//  Created by PingAK9
/////

#import "IOSNativeDatePicker.h"

@implementation IOSNativeDatePicker

+ (CGFloat) GetW {
    
    UIViewController *vc =  UnityGetGLViewController();
    
    bool IsLandscape = true;
    
    
    UIInterfaceOrientation orientation = [UIApplication sharedApplication].statusBarOrientation;
    if(orientation == UIInterfaceOrientationLandscapeLeft || orientation == UIInterfaceOrientationLandscapeRight) {
        IsLandscape = true;
    } else {
        IsLandscape = false;
    }
    
    CGFloat w;
    if(IsLandscape) {
        w = vc.view.frame.size.height;
    } else {
        w = vc.view.frame.size.width;
    }
    
    
    NSArray *vComp = [[UIDevice currentDevice].systemVersion componentsSeparatedByString:@"."];
    if ([[vComp objectAtIndex:0] intValue] >= 8) {
        w = vc.view.frame.size.width;
    }
    
    
    return w;
}

+ (void)DP_changeDate:(UIDatePicker *)sender {
    
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];

    
    [dateFormatter setDateFormat: @"yyyy-MM-dd HH:mm:ss"];
    NSString *dateString = [dateFormatter stringFromDate:sender.date];
    
    NSLog(@"DateChangedEvent: %@", dateString);
    
    UnitySendMessage("MobileDateTimePicker", "DateChangedEvent", [DataConvertor NSStringToChar:dateString]);
}

+(void) DP_PickerClosed:(UIDatePicker *)sender {
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];

    [dateFormatter setDateFormat: @"yyyy-MM-dd HH:mm:ss"];
    NSString *dateString = [dateFormatter stringFromDate:sender.date];
    
    NSLog(@"DateChangedEvent: %@", dateString);
    
    UnitySendMessage("MobileDateTimePicker", "PickerClosedEvent", [DataConvertor NSStringToChar:dateString]);
    
}

UIDatePicker *datePicker;

+ (void) DP_show_with_option:(int)mode secondNumber:(double)unix minDate:(double)minDate maxDate:(double)maxDate{
    UIViewController *vc =  UnityGetGLViewController();
    
    int datePickerHeigt = 216;
    int datePickerX = 0;
    int toolBarHeight = 44;
    
    if(@available(iOS 13.4, *)){
        int datePickerWidth = 300;
        if(@available(iOS 14.0, *)){
            datePickerHeigt = 364;
            datePickerWidth = 320;
        }
        datePickerX = ([self GetW]-datePickerWidth)/2;
    }
    
    int bottomSheetHeight = datePickerHeigt + toolBarHeight;
    
    CGRect toolbarTargetFrame = CGRectMake(0, vc.view.bounds.size.height-datePickerHeigt-toolBarHeight, [self GetW], toolBarHeight);
    CGRect datePickerTargetFrame = CGRectMake(datePickerX, vc.view.bounds.size.height-datePickerHeigt, [self GetW], datePickerHeigt);
    CGRect darkViewTargetFrame = CGRectMake(0, vc.view.bounds.size.height-datePickerHeigt-toolBarHeight, [self GetW], bottomSheetHeight);
    
    CGRect whiteViewTargetFrame = vc.view.bounds;
    
    
    UIView *darkView = [[UIView alloc] initWithFrame:CGRectMake(datePickerX, vc.view.bounds.size.height, [self GetW], bottomSheetHeight)];
    darkView.alpha = 1;
    if (@available(iOS 12.0, *)) {
        if (darkView.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark) {
            darkView.backgroundColor = [UIColor blackColor];
        } else {
            darkView.backgroundColor = [UIColor whiteColor];
        }
    } else {
        darkView.backgroundColor = [UIColor whiteColor];
    }
    darkView.tag = 9;
    
    UIView *whiteView = [[UIView alloc] initWithFrame:vc.view.bounds];
    whiteView.alpha = 1;
    whiteView.backgroundColor = [[UIColor alloc] initWithRed:1 green:1 blue:1 alpha:0];
    whiteView.tag = 8;
    
    UITapGestureRecognizer *tapGesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(DP_dismissDatePicker:)];
    [darkView addGestureRecognizer:tapGesture];
    [vc.view addSubview:darkView];
    [whiteView addGestureRecognizer:tapGesture];
    [vc.view addSubview:whiteView];
    
    
    datePicker = [[UIDatePicker alloc] initWithFrame:CGRectMake(0, vc.view.bounds.size.height+toolBarHeight, [self GetW], datePickerHeigt)];
    datePicker.tag = 10;
        
    
    [datePicker addTarget:self action:@selector(DP_changeDate:) forControlEvents:UIControlEventValueChanged];
    switch (mode) {
        case 1:
            datePicker.datePickerMode = UIDatePickerModeTime;
            break;
            
        case 2:
            datePicker.datePickerMode = UIDatePickerModeDate;
            NSDate *dateTraded = [NSDate dateWithTimeIntervalSince1970 :unix];
            [datePicker setDate:dateTraded];
            if(maxDate != 0){
                NSDate *max = [NSDate dateWithTimeIntervalSince1970 :maxDate];
                datePicker.maximumDate = max;
            }
            if(minDate != 0){
                NSDate *min = [NSDate dateWithTimeIntervalSince1970 :minDate];
                datePicker.minimumDate = min;
            }
            break;
    }
    
    
    // NSLog(@"dtp mode: %ld", (long)datePicker.datePickerMode);
    
    
    [vc.view addSubview:datePicker];
    
    UIToolbar *toolBar = [[UIToolbar alloc] initWithFrame:CGRectMake(0, vc.view.bounds.size.height, [self GetW], toolBarHeight)];
    
    toolBar.tag = 11;
    toolBar.barStyle = UIBarStyleDefault;
    UIBarButtonItem *spacer = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemFlexibleSpace target:nil action:nil];
    UIBarButtonItem *doneButton = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemDone target:self action:@selector(DP_dismissDatePicker:)];

    
    [toolBar setItems:[NSArray arrayWithObjects:spacer, doneButton, nil]];
    [vc.view addSubview:toolBar];
    
    [UIView beginAnimations:@"MoveIn" context:nil];
    toolBar.frame = toolbarTargetFrame;
    
    datePicker.frame = datePickerTargetFrame;
    if (@available(iOS 13.4, *)) {
        datePicker.preferredDatePickerStyle = UIDatePickerStyleWheels;
    }
    if(@available(iOS 13.4, *)){
        if(@available(iOS 14.0, *)){
            datePicker.preferredDatePickerStyle = UIDatePickerStyleInline;
        }else{
            datePicker.preferredDatePickerStyle = UIDatePickerStyleWheels;
        }
    }
    
    darkView.frame = darkViewTargetFrame;
    whiteView.frame = whiteViewTargetFrame;
    
    [UIView commitAnimations];
}

+ (void) DP_show:(int)mode secondNumber:(double)unix{
    [self DP_show_with_option:mode secondNumber:unix minDate:0 maxDate:0];
}

+ (void) DP_show_with_maxDate:(int)mode secondNumber:(double)unix maxDate:(double)maxDate{
        
    [self DP_show_with_option:mode secondNumber:unix minDate:0 maxDate:maxDate];
}

+ (void) DP_show_with_minDate:(int)mode secondNumber:(double)unix minDate:(double)minDate{
        
    [self DP_show_with_option:mode secondNumber:unix minDate:minDate maxDate:0];
}

+ (void) DP_show_with_minMaxDate:(int)mode secondNumber:(double)unix minDate:(double)minDate maxDate:(double)maxDate{
        
    [self DP_show_with_option:mode secondNumber:unix minDate:minDate maxDate:maxDate];
}

+ (void)DP_removeViews:(id)object {
    UIViewController *vc =  UnityGetGLViewController();
    
    [[vc.view viewWithTag:8] removeFromSuperview];
    [[vc.view viewWithTag:9] removeFromSuperview];
    [[vc.view viewWithTag:10] removeFromSuperview];
    [[vc.view viewWithTag:11] removeFromSuperview];
}

+ (void)DP_dismissDatePicker:(id)sender {
    UIViewController *vc =  UnityGetGLViewController();
    
    [self DP_PickerClosed:datePicker];
    
    CGRect toolbarTargetFrame = CGRectMake(0, vc.view.bounds.size.height, [self GetW], 44);
    CGRect datePickerTargetFrame = CGRectMake(0, vc.view.bounds.size.height+44, [self GetW], 216);
    CGRect darkViewTargetFrame = CGRectMake(0, vc.view.bounds.size.height, [self GetW], 260);
    
    
    [UIView beginAnimations:@"MoveOut" context:nil];
    [vc.view viewWithTag:9].frame = darkViewTargetFrame;
    [vc.view viewWithTag:10].frame = datePickerTargetFrame;
    [vc.view viewWithTag:11].frame = toolbarTargetFrame;
    [UIView setAnimationDelegate:self];
    [UIView setAnimationDidStopSelector:@selector(DP_removeViews:)];
    [UIView commitAnimations];
}


extern "C" {
    
    //--------------------------------------
    //  Unity Call Date Time Picker
    //--------------------------------------
    
    void _TAG_ShowDatePicker(int mode, double unix) {
        [IOSNativeDatePicker DP_show:mode secondNumber:unix];
    }
    
    void _TAG_ShowDatePickerWithMaxDate(int mode, double unix, double maxDateUnix) {
        [IOSNativeDatePicker DP_show_with_maxDate:mode secondNumber:unix maxDate:maxDateUnix];
    }
    
    
    void _TAG_ShowDatePickerWithMinDate(int mode, double unix, double minDateUnix) {
        [IOSNativeDatePicker DP_show_with_minDate:mode secondNumber:unix minDate:minDateUnix ];
    }
    
    void _TAG_ShowDatePickerWithMinMaxDate(int mode, double unix, double minDateUnix, double maxDateUnix) {
        [IOSNativeDatePicker DP_show_with_minMaxDate:mode secondNumber:unix minDate:minDateUnix maxDate:maxDateUnix];
    }
}

@end
