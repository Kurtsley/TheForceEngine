#include "rcommon.h"
#include "rflat.h"

namespace RendererClassic
{
	// Resolution
	s32 s_width = 0;
	s32 s_height = 0;
	fixed16 s_halfWidth;
	fixed16 s_halfHeight;
	s32 s_minScreenY;
	s32 s_maxScreenY;
	s32 s_screenXMid;

	// Projection
	fixed16 s_focalLength;
	fixed16 s_focalLenAspect;
	fixed16 s_eyeHeight;
	fixed16* s_depth1d = nullptr;

	// Camera
	fixed16 s_cameraPosX;
	fixed16 s_cameraPosZ;
	fixed16 s_xCameraTrans;
	fixed16 s_zCameraTrans;
	fixed16 s_cosYaw;
	fixed16 s_sinYaw;
	fixed16 s_negSinYaw;

	// Window
	fixed16 s_minScreenX;
	fixed16 s_maxScreenX;
	fixed16 s_windowMinX;
	fixed16 s_windowMaxX;
	fixed16 s_windowMinY;
	fixed16 s_windowMaxY;
	fixed16 s_minSegZ;

	// Display
	u8* s_display;

	// Column Heights
	s32* s_columnTop = nullptr;
	s32* s_columnBot = nullptr;
	s32* s_windowTop = nullptr;
	s32* s_windowBot = nullptr;
	fixed16* s_column_Y_Over_X = nullptr;
	fixed16* s_column_X_Over_Y = nullptr;

	// Segment list.
	RWallSegment s_wallSegListDst[MAX_SEG];
	RWallSegment s_wallSegListSrc[MAX_SEG];

	s32 s_nextWall;
	s32 s_curWallSeg;
	s32 s_drawFrame;

	// Flats
	s32 s_flatCount;
	fixed16* s_rcp_yMinusHalfHeight;
	fixed16 s_wallMaxCeilY;
	fixed16 s_wallMinFloorY;
	s32 s_yMin;
	s32 s_yMax;
	FlatEdges* s_lowerFlatEdge;
	FlatEdges  s_lowerFlatEdgeList[MAX_SEG];

	// Lighting
	const u8* s_colorMap;
	const u8* s_lightSourceRamp;
	s32 s_sectorAmbient;
	s32 s_scaledAmbient;
	s32 s_cameraLightSource;
	s32 s_worldAmbient;

	// Debug
	s32 s_maxWallCount;
}
