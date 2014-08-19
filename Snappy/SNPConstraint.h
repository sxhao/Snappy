//
//  Snappy
//
//  Copyright (c) 2011-2014 Masonry Team - https://github.com/Masonry
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.

#import <Foundation/Foundation.h>

@interface SNPConstraint : NSObject

@property (nonatomic, strong, readonly) SNPConstraint *left;
@property (nonatomic, strong, readonly) SNPConstraint *top;
@property (nonatomic, strong, readonly) SNPConstraint *right;
@property (nonatomic, strong, readonly) SNPConstraint *bottom;
@property (nonatomic, strong, readonly) SNPConstraint *leading;
@property (nonatomic, strong, readonly) SNPConstraint *trailing;
@property (nonatomic, strong, readonly) SNPConstraint *width;
@property (nonatomic, strong, readonly) SNPConstraint *height;
@property (nonatomic, strong, readonly) SNPConstraint *centerX;
@property (nonatomic, strong, readonly) SNPConstraint *centerY;
@property (nonatomic, strong, readonly) SNPConstraint *baseline;

@property (nonatomic, strong, readonly) SNPConstraint *edges;
@property (nonatomic, strong, readonly) SNPConstraint *size;
@property (nonatomic, strong, readonly) SNPConstraint *center;

@property (nonatomic, copy, readonly) SNPConstraint* and;
@property (nonatomic, copy, readonly) SNPConstraint* with;

@end