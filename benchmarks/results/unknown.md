#### [unknown](https://github.com/BobTheBuidler/async-lru/blob/compile/unknown) - [view benchmarks](https://github.com/BobTheBuidler/async-lru/blob/compile/unknown)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `cache_clear_benchmark[bounded]` | 8.919564904476402e-07 | 7.145605399022958e-07 | 19.89% | 24.83% | 1.25x | ✅ |
| `cache_clear_benchmark[unbounded]` | 8.800832414803786e-07 | 7.021633584514532e-07 | 20.22% | 25.34% | 1.25x | ✅ |
| `cache_fill_eviction_benchmark` | 0.0986208173636359 | 0.09544490790908226 | 3.22% | 3.33% | 1.03x | ✅ |
| `cache_hit_benchmark[bounded]` | 0.0010748017482770833 | 0.0008168921880938385 | 24.00% | 31.57% | 1.32x | ✅ |
| `cache_hit_benchmark[unbounded]` | 0.001059048880528083 | 0.0008106849853323994 | 23.45% | 30.64% | 1.31x | ✅ |
| `cache_info_benchmark[bounded]` | 0.0005120393333334833 | 0.00042614514462982586 | 16.77% | 20.16% | 1.20x | ✅ |
| `cache_info_benchmark[unbounded]` | 0.0005058611975664531 | 0.0004189375483732826 | 17.18% | 20.75% | 1.21x | ✅ |
| `cache_invalidate_benchmark[bounded]` | 7.665091029752953e-05 | 5.54627832764245e-05 | 27.64% | 38.20% | 1.38x | ✅ |
| `cache_invalidate_benchmark[unbounded]` | 7.540324416481401e-05 | 5.489200598600053e-05 | 27.20% | 37.37% | 1.37x | ✅ |
| `cache_miss_benchmark[bounded]` | 0.00022966494117040268 | 0.00019606054941731187 | 14.63% | 17.14% | 1.17x | ✅ |
| `cache_miss_benchmark[unbounded]` | 0.00022989276300518344 | 0.0001958944137957969 | 14.79% | 17.36% | 1.17x | ✅ |
| `cache_ttl_expiry_benchmark[bounded]` | 1.9455356865929513e-05 | 1.915200831397623e-05 | 1.56% | 1.58% | 1.02x | ✅ |
| `cache_ttl_expiry_benchmark[unbounded]` | 1.9253366275272123e-05 | 1.8846442585379894e-05 | 2.11% | 2.16% | 1.02x | ✅ |
| `concurrent_cache_hit_benchmark[bounded]` | 0.0005593739383017238 | 0.0005356864645141692 | 4.23% | 4.42% | 1.04x | ✅ |
| `concurrent_cache_hit_benchmark[unbounded]` | 0.0005592716821452904 | 0.0005366736726787337 | 4.04% | 4.21% | 1.04x | ✅ |
| `internal_cache_hit_microbenchmark[bounded]` | 2.7883621000372694e-05 | 1.7184346737945356e-05 | 38.37% | 62.26% | 1.62x | ✅ |
| `internal_cache_hit_microbenchmark[unbounded]` | 2.7701881003538478e-05 | 1.7151473488179317e-05 | 38.09% | 61.51% | 1.62x | ✅ |
| `internal_cache_miss_microbenchmark[bounded]` | 1.834213401128447e-05 | 1.0190715668977679e-05 | 44.44% | 79.99% | 1.80x | ✅ |
| `internal_cache_miss_microbenchmark[unbounded]` | 1.809218962178387e-05 | 1.0218695142134254e-05 | 43.52% | 77.05% | 1.77x | ✅ |
| `internal_task_done_callback_microbenchmark[cancelled-bounded]` | 0.000547074155722369 | 0.0005036402765351884 | 7.94% | 8.62% | 1.09x | ✅ |
| `internal_task_done_callback_microbenchmark[cancelled-unbounded]` | 0.0005486928476558265 | 0.0005015063623577422 | 8.60% | 9.41% | 1.09x | ✅ |
| `internal_task_done_callback_microbenchmark[exception-bounded]` | 0.20924531519999617 | 0.2022298971999817 | 3.35% | 3.47% | 1.03x | ✅ |
| `internal_task_done_callback_microbenchmark[exception-unbounded]` | 0.20420754599999782 | 0.20119710580001993 | 1.47% | 1.50% | 1.01x | ✅ |
| `internal_task_done_callback_microbenchmark[finished-bounded]` | 0.0006607718762534144 | 0.000593360256054007 | 10.20% | 11.36% | 1.11x | ✅ |
| `internal_task_done_callback_microbenchmark[finished-unbounded]` | 0.0006608966288306033 | 0.0005991985149178477 | 9.34% | 10.30% | 1.10x | ✅ |
