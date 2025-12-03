#ifndef temp_H
#define temp_H

#define C_T0_F(c) ((c * 9 / 5) + 32)
#define F_T0_C(f) ((f - 32) * 5 / 9)
enum Unit
{
    CELSIUS,
    FAHRENHEIT
};
void convertTemp(enum Unit from, float value);

#endif