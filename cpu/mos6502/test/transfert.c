#include "test.h"

static int test_txa()
{
    unsigned char rom = 0x8A;

    mos6502_t cpu;
    mos6502_init(&cpu);
    mos6502_add_test_full_mapping(&cpu, rom);


    assert_is_equal(ticks, 2);
    assert_is_equal(cpu.a, cpu.x);

    return 0;
}

static int test_tax()
{
    unsigned char rom = 0xAA;

    mos6502_t cpu;
    mos6502_init(&cpu);
    mos6502_add_test_full_mapping(&cpu, rom);


    assert_is_equal(ticks, 2);
    assert_is_equal(cpu.x, cpu.a);

    return 0;
}

static int test_tya()
{
    unsigned char rom = 0x98;

    mos6502_t cpu;
    mos6502_init(&cpu);
    mos6502_add_test_full_mapping(&cpu, rom);


    assert_is_equal(ticks, 2);
    assert_is_equal(cpu.a, cpu.y);

    return 0;
}

static int test_tay()
{
    unsigned char rom = 0xA8;

    mos6502_t cpu;
    mos6502_init(&cpu);
    mos6502_add_test_full_mapping(&cpu, rom);


    assert_is_equal(ticks, 2);
    assert_is_equal(cpu.y, cpu.a);

    return 0;
}

static int test_txs()
{
    unsigned char rom = 0x9A;

    mos6502_t cpu;
    mos6502_init(&cpu);
    mos6502_add_test_full_mapping(&cpu, rom);


    assert_is_equal(ticks, 2);
    assert_is_equal(cpu.sp, cpu.x);

    return 0;
}

static int test_tsx()
{
    unsigned char rom = 0xBA;

    mos6502_t cpu;
    mos6502_init(&cpu);
    mos6502_add_test_full_mapping(&cpu, rom);


    assert_is_equal(ticks, 2);
    assert_is_equal(cpu.x, cpu.sp);

    return 0;
}