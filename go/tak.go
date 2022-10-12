package main

func Tak(x, y, z int) int {
	if y < x {
		return Tak(
			Tak(x-1, y, z),
			Tak(y-1, z, x),
			Tak(z-1, x, y),
		)
	} else {
		return z
	}
}
