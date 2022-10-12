use criterion::{black_box, criterion_group, criterion_main, Criterion};

fn tak(x: u8, y: u8, z: u8) -> u8 {
    if y < x {
        tak(tak(x - 1, y, z), tak(y - 1, z, x), tak(z - 1, x, y))
    } else {
        z
    }
}

fn criterion_benchmark(c: &mut Criterion) {
    c.bench_function("tak", |b| {
        b.iter(|| tak(black_box(18), black_box(12), black_box(6)))
    });
}

criterion_group!(benches, criterion_benchmark);
criterion_main!(benches);
