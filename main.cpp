#include "seminar1.h"

#include <benchmark/benchmark.h>

#include <iostream>

static void BM_HelloWorld(benchmark::State& state)
{
    for (auto _ : state)
    {
        std::cout << "Hello, World!" << std::endl;
    }
}

BENCHMARK(BM_HelloWorld);

BENCHMARK_MAIN();
