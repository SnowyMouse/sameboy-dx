#ifndef GB_PROXY_H
#define GB_PROXY_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

struct GB_gameboy_s;

typedef enum {
    SM83_REG_A,
    SM83_REG_B,
    SM83_REG_C,
    SM83_REG_D,
    SM83_REG_E,
    SM83_REG_F,
    SM83_REG_HL,
    SM83_REG_PC,
    SM83_REG_SP,
} sm83_register;

uint16_t get_gb_register(const struct GB_gameboy_s *gb, sm83_register r);
void set_gb_register(struct GB_gameboy_s *gb, sm83_register r, uint16_t v);

uint32_t get_gb_backtrace_size(const struct GB_gameboy_s *gb);
uint16_t get_gb_backtrace_address(const struct GB_gameboy_s *gb, uint32_t bt);

uint32_t get_gb_breakpoint_size(const struct GB_gameboy_s *gb);
uint16_t get_gb_breakpoint_address(const struct GB_gameboy_s *gb, uint32_t bt);

#ifdef __cplusplus
}
#endif
    
#endif
