#ifndef DP_RUSTPILE_FFI_H
#define DP_RUSTPILE_FFI_H

/* Generated with cbindgen, do not edit manually. Run bindgen.sh to regenerate this file. */

#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <new>

namespace rustpile {

static const uint8_t ChatMessage_FLAGS_ACTION = 4;

static const uint8_t JoinMessage_FLAGS_AUTH = 1;

static const uint8_t JoinMessage_FLAGS_BOT = 4;

static const uint8_t ChatMessage_FLAGS_BYPASS = 1;

static const uint8_t LayerAttributesMessage_FLAGS_CENSOR = 1;

static const uint8_t LayerCreateMessage_FLAGS_COPY = 1;

static const uint8_t LayerAttributesMessage_FLAGS_FIXED = 2;

static const uint8_t LayerCreateMessage_FLAGS_INSERT = 2;

static const uint8_t JoinMessage_FLAGS_MOD = 2;

static const uint8_t ChatMessage_FLAGS_PIN = 8;

static const uint8_t ChatMessage_FLAGS_SHOUT = 2;

static const uintptr_t DrawDabsClassicMessage_MAX_CLASSICDABS = 10920;

static const uintptr_t DrawDabsPixelMessage_MAX_PIXELDABS = 16380;

enum class Blendmode : uint8_t {
  Erase = 0,
  Normal,
  Multiply,
  Divide,
  Burn,
  Dodge,
  Darken,
  Lighten,
  Subtract,
  Add,
  Recolor,
  Behind,
  ColorErase,
  Replace = 255,
};

enum class BrushPreviewShape {
  Stroke,
  Line,
  Rectangle,
  Ellipse,
  FloodFill,
  FloodErase,
};

enum class ClassicBrushShape : uint8_t {
  RoundPixel,
  SquarePixel,
  RoundSoft,
};

struct BrushPreview;

struct Range {
  float min;
  float max;
};

struct Color {
  float r;
  float g;
  float b;
  float a;
};
static const Color Color_TRANSPARENT = Color{ /* .r = */ 0.0, /* .g = */ 0.0, /* .b = */ 0.0, /* .a = */ 0.0 };
static const Color Color_BLACK = Color{ /* .r = */ 0.0, /* .g = */ 0.0, /* .b = */ 0.0, /* .a = */ 1.0 };
static const Color Color_WHITE = Color{ /* .r = */ 1.0, /* .g = */ 1.0, /* .b = */ 1.0, /* .a = */ 1.0 };

/// The parameters of a classic soft and pixel Drawpile brushes.
struct ClassicBrush {
  /// The diameter of the brush
  Range size;
  /// Brush hardness (ignored for Pixel shapes)
  Range hardness;
  /// Brush opacity (in indirect mode, this is the opacity of the entire stroke)
  Range opacity;
  /// Smudging factor (1.0 means color is entirely replaced by picked up color)
  Range smudge;
  /// Distance between dabs in diameters.
  float spacing;
  /// Color pickup frequency. <=1 means color is picked up at every dab.
  int32_t resmudge;
  /// Initial brush color
  Color color;
  /// Brush dab shape
  ClassicBrushShape shape;
  /// Blending mode
  Blendmode mode;
  /// Draw directly without using a temporary layer
  bool incremental;
  /// Pick initial color from the layer
  bool colorpick;
  /// Apply pressure to size
  bool size_pressure;
  /// Apply pressure to hardness
  bool hardness_pressure;
  /// Apply pressure to opacity
  bool opacity_pressure;
  /// Apply pressure to smudging
  bool smudge_pressure;
};

extern "C" {

void rustpile_init();

BrushPreview *brushpreview_new(uint32_t width, uint32_t height);

void brushpreview_free(BrushPreview *bp);

void brushpreview_render(BrushPreview *bp, const ClassicBrush *brush, BrushPreviewShape shape);

void brushpreview_floodfill(BrushPreview *bp,
                            const Color *color,
                            float tolerance,
                            int32_t expansion,
                            bool fill_under);

void brushpreview_paint(const BrushPreview *bp,
                        void *ctx,
                        void (*paint_func)(void *ctx, int32_t x, int32_t y, const uint8_t *pixels));

} // extern "C"

} // namespace rustpile

#endif // DP_RUSTPILE_FFI_H
