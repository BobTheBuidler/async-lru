#### [unknown](https://github.com/BobTheBuidler/async-lru/blob/update/unknown) - [view benchmarks](https://github.com/BobTheBuidler/async-lru/blob/update/unknown)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `cache_clear_benchmark[bounded]` | 8.904015559719553e-07 | 5.028097361669159e-07 | 43.53% | 77.09% | 1.77x | ✅ |
| `cache_clear_benchmark[meth-bounded]` | 1.1779679669679503e-06 | 5.272331841299215e-07 | 55.24% | 123.42% | 2.23x | ✅ |
| `cache_clear_benchmark[meth-unbounded]` | 1.1379274272846433e-06 | 5.061173679113886e-07 | 55.52% | 124.83% | 2.25x | ✅ |
| `cache_clear_benchmark[unbounded]` | 8.877115202875612e-07 | 4.97314384665685e-07 | 43.98% | 78.50% | 1.79x | ✅ |
| `cache_fill_eviction_benchmark` | 0.0973199250000014 | 0.09337070763636358 | 4.06% | 4.23% | 1.04x | ✅ |
| `cache_hit_benchmark[bounded]` | 0.0010582751003342381 | 0.0005521416146844862 | 47.83% | 91.67% | 1.92x | ✅ |
| `cache_hit_benchmark[meth-bounded]` | 0.002137744366594461 | 0.0018622048220502169 | 12.89% | 14.80% | 1.15x | ✅ |
| `cache_hit_benchmark[meth-unbounded]` | 0.002132000359307214 | 0.00186509973282441 | 12.52% | 14.31% | 1.14x | ✅ |
| `cache_hit_benchmark[unbounded]` | 0.0010694719675674717 | 0.0005465929866098372 | 48.89% | 95.66% | 1.96x | ✅ |
| `cache_info_benchmark[bounded]` | 0.0005049096809597384 | 0.0003927224750543356 | 22.22% | 28.57% | 1.29x | ✅ |
| `cache_info_benchmark[meth-bounded]` | 0.0005736101727052575 | 0.00040297840664443207 | 29.75% | 42.34% | 1.42x | ✅ |
| `cache_info_benchmark[meth-unbounded]` | 0.0005748388836773876 | 0.0004024651965227009 | 29.99% | 42.83% | 1.43x | ✅ |
| `cache_info_benchmark[unbounded]` | 0.0005095493700368691 | 0.0003945999946808132 | 22.56% | 29.13% | 1.29x | ✅ |
| `cache_invalidate_benchmark[bounded]` | 7.753340772242203e-05 | 2.631193930017998e-05 | 66.06% | 194.67% | 2.95x | ✅ |
| `cache_invalidate_benchmark[meth-bounded]` | 0.0002542624034573065 | 0.00021091464428813403 | 17.05% | 20.55% | 1.21x | ✅ |
| `cache_invalidate_benchmark[meth-unbounded]` | 0.00025431760195444213 | 0.00021499979508212382 | 15.46% | 18.29% | 1.18x | ✅ |
| `cache_invalidate_benchmark[unbounded]` | 7.429166570185942e-05 | 2.6420708282301713e-05 | 64.44% | 181.19% | 2.81x | ✅ |
| `cache_miss_benchmark[bounded]` | 0.00023129886781611254 | 0.0001875236619317544 | 18.93% | 23.34% | 1.23x | ✅ |
| `cache_miss_benchmark[meth-bounded]` | 0.0002894622069969191 | 0.0002588488491124988 | 10.58% | 11.83% | 1.12x | ✅ |
| `cache_miss_benchmark[meth-unbounded]` | 0.0002895207713416434 | 0.0002587890771429053 | 10.61% | 11.88% | 1.12x | ✅ |
| `cache_miss_benchmark[unbounded]` | 0.00023149635988202732 | 0.00018822723268696728 | 18.69% | 22.99% | 1.23x | ✅ |
| `cache_ttl_expiry_benchmark[bounded]` | 1.937315864490779e-05 | 1.802674358179248e-05 | 6.95% | 7.47% | 1.07x | ✅ |
| `cache_ttl_expiry_benchmark[meth-bounded]` | 2.1272479797260345e-05 | 2.0883794481027617e-05 | 1.83% | 1.86% | 1.02x | ✅ |
| `cache_ttl_expiry_benchmark[meth-unbounded]` | 2.1102001740508805e-05 | 2.1264346864429867e-05 | -0.77% | -0.76% | 0.99x | ❌ |
| `cache_ttl_expiry_benchmark[unbounded]` | 1.9102692744372792e-05 | 1.816194140144177e-05 | 4.92% | 5.18% | 1.05x | ✅ |
| `concurrent_cache_hit_benchmark[bounded]` | 0.0005572563059935274 | 0.0005022610475205942 | 9.87% | 10.95% | 1.11x | ✅ |
| `concurrent_cache_hit_benchmark[meth-bounded]` | 0.0006740139456065918 | 0.0006498420752426207 | 3.59% | 3.72% | 1.04x | ✅ |
| `concurrent_cache_hit_benchmark[meth-unbounded]` | 0.0006752514530857614 | 0.0006497778156645891 | 3.77% | 3.92% | 1.04x | ✅ |
| `concurrent_cache_hit_benchmark[unbounded]` | 0.000558697338027634 | 0.0005037305232096141 | 9.84% | 10.91% | 1.11x | ✅ |
| `internal_cache_hit_microbenchmark[bounded]` | 2.7726148331130045e-05 | 8.858565757555886e-06 | 68.05% | 212.99% | 3.13x | ✅ |
| `internal_cache_hit_microbenchmark[unbounded]` | 2.7648349318006243e-05 | 8.969277021142669e-06 | 67.56% | 208.26% | 3.08x | ✅ |
| `internal_cache_miss_microbenchmark[bounded]` | 1.874027484124864e-05 | 3.4569903832375174e-06 | 81.55% | 442.10% | 5.42x | ✅ |
| `internal_cache_miss_microbenchmark[unbounded]` | 1.8790177740217897e-05 | 3.4172232304033337e-06 | 81.81% | 449.87% | 5.50x | ✅ |
| `internal_task_done_callback_microbenchmark[cancelled-bounded]` | 0.0005328482060709291 | 0.00047378917102609103 | 11.08% | 12.47% | 1.12x | ✅ |
| `internal_task_done_callback_microbenchmark[cancelled-unbounded]` | 0.0005412539507042459 | 0.00047492786552826905 | 12.25% | 13.97% | 1.14x | ✅ |
| `internal_task_done_callback_microbenchmark[exception-bounded]` | 0.20411478979999628 | 0.19959347816666195 | 2.22% | 2.27% | 1.02x | ✅ |
| `internal_task_done_callback_microbenchmark[exception-unbounded]` | 0.20048400560000346 | 0.19919741140000724 | 0.64% | 0.65% | 1.01x | ✅ |
| `internal_task_done_callback_microbenchmark[finished-bounded]` | 0.0006467174308512424 | 0.0005328304829062371 | 17.61% | 21.37% | 1.21x | ✅ |
| `internal_task_done_callback_microbenchmark[finished-unbounded]` | 0.0006547120268635773 | 0.000532497678251162 | 18.67% | 22.95% | 1.23x | ✅ |
