#include <stdint.h>

uint32_t foo(uint32_t a, uint8_t b, int c) {
  return (a & ~(0x42 << c)) | (b << c);
}
