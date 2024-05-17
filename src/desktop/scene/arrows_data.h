// SPDX-License-Identifier: GPL-3.0-or-later

#include <QPointF>

namespace arrows {

static constexpr QPointF
 diag1[] {
	{0,0}, {6,0}, {4,2}, {8,6}, {10,4}, {10,10},
	{4, 10}, {6,8}, {2,4}, {0,6}
}
,diag2[] {
	{10,0}, {10,6}, {8,4}, {4,8}, {6,10}, {0,10},
	{0,4}, {2,6}, {6,2}, {4,0}
}
,vertical[] {
	{5,0}, {10,4}, {7,4}, {7, 6}, {10,6}, {5,10},
	{0,6}, {3,6}, {3,4}, {0,4}
}
,horizontal[] {
	{0,5}, {4,0}, {4,3}, {6,3}, {6,0}, {10,5},
	{6,10}, {6,7}, {4,7}, {4,10}
}
,rotate1[] {
	{7,0}, {10,3}, {7,6}, {7,4}, {4,4}, {4,7},
	{6,7}, {3, 10}, {0,7}, {2,7}, {2,2}, {7,2}
}
,rotate2[] {
	{0,3}, {3,0}, {3,2}, {8,2}, {8,7}, {10,7},
	{7,10}, {4,7}, {6,7}, {6,4}, {3,4}, {3,6}
}
,rotate3[] {
	{7,0}, {10,3}, {8,3}, {8,8}, {3,8}, {3,10},
	{0,7}, {3,4}, {3,6}, {6,6}, {6,3}, {4,3}
}
,rotate4[] {
	{3,0}, {6,3}, {4,3}, {4,6}, {7,6}, {7,4},
	{10,7}, {7,10}, {7,8}, {2,8}, {2,3}, {0,3}
}
,horizontalSkew[] {
	{0,2}, {5,2}, {10,8}, {5,8}
}
,verticalSkew[] {
	{2,5}, {8,0}, {8,5}, {2,10}
}
,distortTopLeft[] {
	{0,0}, {5,0}, {5,5}, {0,5}
}
,distortTop[] {
	{3,0}, {8,0}, {8,5}, {3,5}
}
,distortTopRight[] {
	{5,0}, {10,0}, {10,5}, {5,5}
}
,distortRight[] {
	{5,3}, {10,3}, {10,8}, {5,8}
}
,distortBottomRight[] {
	{5,5}, {10,5}, {10,10}, {5,10}
}
,distortBottom[] {
	{3,5}, {8,5}, {8,10}, {3,10}
}
,distortBottomLeft[] {
	{0,5}, {5,5}, {5,10}, {0,10}
}
,distortLeft[] {
	{0,3}, {5,3}, {5,8}, {0,8}
}
,distort[] {
	{1.5,1.5}, {8.5,1.5}, {8.5,8.5}, {1.5,8.5}
}
;

}

