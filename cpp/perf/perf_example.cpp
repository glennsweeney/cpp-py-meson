#include <benchmark/benchmark.h>

static void BM_Example(benchmark::State& state) {
  // Perform setup here
  for (auto _ : state) {
  }
}
// Register the function as a benchmark
BENCHMARK(BM_Example);
