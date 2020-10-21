#ifndef COL_H
#define COL_H

static inline v4 col_opq(const float r, const float g, const float b)
{
	return (v4) { r, g, b, 1.f };
}

static inline v4 col_lum(const float v)
{
	return col_opq(v, v, v);
}

static inline v4 col_red()
{
	return col_opq(1.f, 0.f, 0.f);
}

static inline v4 col_mul(v4 v, float s)
{
	return (v4) {
		v.x * s,
		v.y * s,
		v.z * s,
		v.w
	};
}

#endif
