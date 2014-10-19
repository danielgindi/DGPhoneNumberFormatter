//
//  DGPhoneNumberFormatter.h
//  DGPhoneNumberFormatter
//  v1.0.1
//
//  Created by Daniel Cohen Gindi on 5/4/12.
//  Copyright (c) 2013 danielgindi@gmail.com. All rights reserved.
//
//  https://github.com/danielgindi/DGPhoneNumberFormatter
//
//  This class is an NSFormatter that can be used like any other Cocoa formatter,
//    to format phone numbers in a manner similar to the iPhone's Phone app.
//  Clarification: This is currently design for formatting number when calling from inside Israel, to either national or international number.
//    Other countries may be supported in the future.
//  
//  The MIT License (MIT)
//  
//  Copyright (c) 2014 Daniel Cohen Gindi (danielgindi@gmail.com)
//  
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//  
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//  
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE. 
//  

#import <Foundation/Foundation.h>

@interface DGPhoneNumberFormatter : NSFormatter
@end


