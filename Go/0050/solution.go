import "math"

// 2020-08-07 15:34:32

func myPow(x float64, n int) float64 {
	N := int64(math.Abs(float64(n)))
	ret := 1.0
	for ; N != 0; N >>= 1 {
		if (N & 1) == 1 {
			ret *= x
		}
		x *= x
	}
	if n < 0 {
		return 1.0 / ret
	} else {
		return ret
	}
}