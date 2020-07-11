//
//  ASTheme.h
//  ASFoundation
//
//  Created by ashoka on 2020/7/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ASTheme : NSObject

- (instancetype)initWithConfig:(NSDictionary *)config;

#pragma mark Foreground colors

/* Primary Color
 */
@property (nonatomic, readonly) UIColor *primaryColor;
@property (nonatomic, readonly) UIColor *secondaryPrimaryColor;
@property (nonatomic, readonly) UIColor *tertiaryPrimaryColor;
@property (nonatomic, readonly) UIColor *quaternaryPrimaryColor;

/*
 Status color
 */
@property (nonatomic, readonly) UIColor *successStatusColor;
@property (nonatomic, readonly) UIColor *warningStatusColor;
@property (nonatomic, readonly) UIColor *errorStatusColor;

/* Foreground colors for static text and related elements.
 */
@property (nonatomic, readonly) UIColor *labelColor;
@property (nonatomic, readonly) UIColor *secondaryLabelColor;
@property (nonatomic, readonly) UIColor *tertiaryLabelColor;
@property (nonatomic, readonly) UIColor *quaternaryLabelColor;

/* 反色
 */
@property (nonatomic, readonly) UIColor *inverseColor;

/* Foreground color for standard system links.
 */
@property (nonatomic, readonly) UIColor *linkColor;

/* Foreground color for placeholder text in controls or text fields or text views.
 */
@property (nonatomic, readonly) UIColor *placeholderTextColor;

/* Foreground colors for separators (thin border or divider lines).
 * `separatorColor` may be partially transparent, so it can go on top of any content.
 * `opaqueSeparatorColor` is intended to look similar, but is guaranteed to be opaque, so it will
 * completely cover anything behind it. Depending on the situation, you may need one or the other.
 */
@property (nonatomic, readonly) UIColor *separatorColor;
@property (nonatomic, readonly) UIColor *opaqueSeparatorColor;

#pragma mark Background colors

/* We provide two design systems (also known as "stacks") for structuring an iOS app's backgrounds.
 *
 * Each stack has three "levels" of background colors. The first color is intended to be the
 * main background, farthest back. Secondary and tertiary colors are layered on top
 * of the main background, when appropriate.
 *
 * Inside of a discrete piece of UI, choose a stack, then use colors from that stack.
 * We do not recommend mixing and matching background colors between stacks.
 * The foreground colors above are designed to work in both stacks.
 *
 * 1. systemBackground
 *    Use this stack for views with standard table views, and designs which have a white
 *    primary background in light mode.
 */
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *secondaryBackgroundColor;
@property (nonatomic, readonly) UIColor *tertiaryBackgroundColor;

/* 2. systemGroupedBackground
 *    Use this stack for views with grouped content, such as grouped tables and
 *    platter-based designs. These are like grouped table views, but you may use these
 *    colors in places where a table view wouldn't make sense.
 */
@property (nonatomic, readonly) UIColor *groupedBackgroundColor;
@property (nonatomic, readonly) UIColor *secondaryGroupedBackgroundColor;
@property (nonatomic, readonly) UIColor *tertiaryGroupedBackgroundColor;

#pragma mark Fill colors

/* Fill colors for UI elements.
 * These are meant to be used over the background colors, since their alpha component is less than 1.
 *
 * fillColor is appropriate for filling thin and small shapes.
 * Example: The track of a slider.
 */
@property (nonatomic, readonly) UIColor *fillColor;

/* secondaryFillColor is appropriate for filling medium-size shapes.
 * Example: The background of a switch.
 */
@property (nonatomic, readonly) UIColor *secondaryFillColor;

/* tertiaryFillColor is appropriate for filling large shapes.
 * Examples: Input fields, search bars, buttons.
 */
@property (nonatomic, readonly) UIColor *tertiaryFillColor;

/* quaternaryFillColor is appropriate for filling large areas containing complex content.
 * Example: Expanded table cells.
 */
@property (nonatomic, readonly) UIColor *quaternaryFillColor;

@end

NS_ASSUME_NONNULL_END
