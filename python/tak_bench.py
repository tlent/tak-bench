import timeit


def tak(x, y, z):
    if y < z:
        return tak(
            tak(x - 1, y, z),
            tak(y - 1, z, x),
            tak(z - 1, x, y)
        )
    else:
        return z


print(timeit.timeit(lambda: tak(18, 12, 6), number=10_000))
