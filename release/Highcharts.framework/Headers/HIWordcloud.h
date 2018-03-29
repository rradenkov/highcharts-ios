/**
* (c) 2009-2018 Highsoft AS
*
* License: www.highcharts.com/license
* For commercial usage, a valid license is required. To purchase a license for Highcharts iOS, please see our website: https://shop.highsoft.com/
* In case of questions, please contact sales@highsoft.com
*/

#import "HISeries.h"
#import "HIStyle.h"
#import "HIRotation.h"
#import "HIColor.h"


/**
A `wordcloud` series. If the `type` option is not specified, it is inherited from `chart.type`. For options that apply to multiple series, it is recommended to add them to the `plotOptions.series` options structure. To apply to all series of this specific type, apply it to `plotOptions.wordcloud`.
*/
@interface HIWordcloud: HISeries

/**
When using automatic point colors pulled from the `options.colors` collection, this option determines whether the chart should receive one color per series or one color per point.

**Defaults to** `false`.

**Try it**

* [False by default](https://jsfiddle.net/gh/get/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-colorbypoint-false/)
* [True](https://jsfiddle.net/gh/get/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-colorbypoint-true/)
*/
@property(nonatomic, readwrite) NSNumber /* Bool */ *colorByPoint;
/**
CSS styles for the words.

**Defaults to** `{"fontFamily":"sans-serif", "fontWeight": "900"}`.
*/
@property(nonatomic, readwrite) HIStyle *style;
/**
Spiral used for placing a word after the inital position experienced a collision with either another word or the borders. It is possible for users to add their own custom spiralling algorithms for use in word cloud. Read more about it in our [documentation](https://www.highcharts.com/docs/chart-and-series-types/word-cloud-series#custom-spiralling-algorithm)
*/
@property(nonatomic, readwrite) NSString *spiral;
/**
The width of the border surrounding each column or bar. In styled mode, the stroke width can be set with the `.highcharts-point` rule.

**Defaults to** `1`.

**Try it**

* [2px black border](https://jsfiddle.net/gh/get/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-borderwidth/)
*/
@property(nonatomic, readwrite) NSNumber *borderWidth;
/**
Rotation options for the words in the wordcloud.

**Try it**

* [Word cloud with rotation](https://jsfiddle.net/gh/get/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/wordcloud-rotation)
*/
@property(nonatomic, readwrite) HIRotation *rotation;
/**
This option decides which algorithm is used for placement, and rotation of a word. The choice of algorith is therefore a crucial part of the resulting layout of the wordcloud. It is possible for users to add their own custom placement strategies for use in word cloud. Read more about it in our [documentation](https://www.highcharts.com/docs/chart-and-series-types/word-cloud-series#custom-placement-strategies)
*/
@property(nonatomic, readwrite) NSString *placementStrategy;
/**
The corner radius of the border surrounding each column or bar.

**Defaults to** `0`.

**Try it**

* [Rounded columns](https://jsfiddle.net/gh/get/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-borderradius/)
*/
@property(nonatomic, readwrite) NSNumber *borderRadius;
/**
A series specific or series type specific color set to apply instead of the global `colors` when `colorByPoint` is true.
*/
@property(nonatomic, readwrite) NSArray<HIColor *> *colors;
@property(nonatomic, readwrite) NSNumber /* Bool */ *startFromThreshold;
/**
The color of the border surrounding each column or bar. In styled mode, the border stroke can be set with the `.highcharts-point` rule.

**Defaults to** `#ffffff`.

**Try it**

* [Dark gray border](https://jsfiddle.net/gh/get/library/pure/highcharts/highcharts/tree/master/samples/highcharts/plotoptions/column-bordercolor/)
*/
@property(nonatomic, readwrite) HIColor *borderColor;
/**
3D columns only. The width of the colored edges.

**Defaults to** `1`.
*/
@property(nonatomic, readwrite) NSNumber *edgeWidth;

-(NSDictionary *)getParams;

@end