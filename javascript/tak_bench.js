const bench = require('nanobench');

function tak(x, y, z) {
    if (y < x) {
        return tak(
            tak(x - 1, y, z),
            tak(y - 1, z, x),
            tak(z - 1, x, y)
        );
    } else {
        return z;
    }
}

bench("Tak", b => {
    b.start();
    tak(18, 12, 6);
    b.end();
});