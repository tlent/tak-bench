package main

import (
	"testing"
)

func BenchmarkTak(b *testing.B) {
	for n := 0; n < b.N; n++ {
		Tak(18, 12, 6)
	}
}
