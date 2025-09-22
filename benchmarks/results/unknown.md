#### [unknown](https://github.com/BobTheBuidler/async-lru/blob/compile/unknown) - [view benchmarks](https://github.com/BobTheBuidler/async-lru/blob/compile/unknown)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `cache_clear_benchmark[bounded]` | 8.702525303527898e-07 | 7.27694458142952e-07 | 16.38% | 19.59% | 1.20x | ✅ |
| `cache_clear_benchmark[meth-bounded]` | 1.1283856443498537e-06 | 9.531595926915258e-07 | 15.53% | 18.38% | 1.18x | ✅ |
| `cache_clear_benchmark[meth-unbounded]` | 1.1312230343989758e-06 | 9.506811107276751e-07 | 15.96% | 18.99% | 1.19x | ✅ |
| `cache_clear_benchmark[unbounded]` | 8.767128095943467e-07 | 7.154117528061771e-07 | 18.40% | 22.55% | 1.23x | ✅ |
| `cache_fill_eviction_benchmark` | 0.09710541936362915 | 0.09424978263635611 | 2.94% | 3.03% | 1.03x | ✅ |
| `cache_hit_benchmark[bounded]` | 0.0010521623046432173 | 0.0008043507897826875 | 23.55% | 30.81% | 1.31x | ✅ |
| `cache_hit_benchmark[meth-bounded]` | 0.0021182713806437796 | 0.001754895268115855 | 17.15% | 20.71% | 1.21x | ✅ |
| `cache_hit_benchmark[meth-unbounded]` | 0.0021126179978260187 | 0.0017695140053854603 | 16.24% | 19.39% | 1.19x | ✅ |
| `cache_hit_benchmark[unbounded]` | 0.0010499119289624145 | 0.0008071130000002671 | 23.13% | 30.08% | 1.30x | ✅ |
| `cache_info_benchmark[bounded]` | 0.0005062717588706755 | 0.0004171961065001646 | 17.59% | 21.35% | 1.21x | ✅ |
| `cache_info_benchmark[meth-bounded]` | 0.000577567527778073 | 0.00047948733449908334 | 16.98% | 20.46% | 1.20x | ✅ |
| `cache_info_benchmark[meth-unbounded]` | 0.0005783574086124928 | 0.00047425544970457537 | 18.00% | 21.95% | 1.22x | ✅ |
| `cache_info_benchmark[unbounded]` | 0.0005064983264979281 | 0.0004077329064213962 | 19.50% | 24.22% | 1.24x | ✅ |
| `cache_invalidate_benchmark[bounded]` | 7.629009315037708e-05 | 5.495246554736471e-05 | 27.97% | 38.83% | 1.39x | ✅ |
| `cache_invalidate_benchmark[meth-bounded]` | 0.0002550289102758869 | 0.00022176954428375803 | 13.04% | 15.00% | 1.15x | ✅ |
| `cache_invalidate_benchmark[meth-unbounded]` | 0.00025728586084357524 | 0.00022340678667863363 | 13.17% | 15.16% | 1.15x | ✅ |
| `cache_invalidate_benchmark[unbounded]` | 7.484963647582669e-05 | 5.395403909148602e-05 | 27.92% | 38.73% | 1.39x | ✅ |
| `cache_miss_benchmark[bounded]` | 0.0002289180974917347 | 0.00019469830878054872 | 14.95% | 17.58% | 1.18x | ✅ |
| `cache_miss_benchmark[meth-bounded]` | 0.0002912301032418214 | 0.00024391758974610914 | 16.25% | 19.40% | 1.19x | ✅ |
| `cache_miss_benchmark[meth-unbounded]` | 0.00028711303283630716 | 0.00024328407988902776 | 15.27% | 18.02% | 1.18x | ✅ |
| `cache_miss_benchmark[unbounded]` | 0.0002299740235322227 | 0.0001937731909822771 | 15.74% | 18.68% | 1.19x | ✅ |
| `cache_ttl_expiry_benchmark[bounded]` | 1.9398580430573677e-05 | 1.8770793599706524e-05 | 3.24% | 3.34% | 1.03x | ✅ |
| `cache_ttl_expiry_benchmark[meth-bounded]` | 2.1678879485457997e-05 | 2.1303293907025872e-05 | 1.73% | 1.76% | 1.02x | ✅ |
| `cache_ttl_expiry_benchmark[meth-unbounded]` | 2.131831868361835e-05 | 2.0798659009631628e-05 | 2.44% | 2.50% | 1.02x | ✅ |
| `cache_ttl_expiry_benchmark[unbounded]` | 2.0096857684030398e-05 | 1.876578240757139e-05 | 6.62% | 7.09% | 1.07x | ✅ |
| `concurrent_cache_hit_benchmark[bounded]` | 0.000558550914014643 | 0.0005372075023380618 | 3.82% | 3.97% | 1.04x | ✅ |
| `concurrent_cache_hit_benchmark[meth-bounded]` | 0.0006771271809074396 | 0.000642288357731128 | 5.15% | 5.42% | 1.05x | ✅ |
| `concurrent_cache_hit_benchmark[meth-unbounded]` | 0.0006717064247858126 | 0.0006429230155553064 | 4.29% | 4.48% | 1.04x | ✅ |
| `concurrent_cache_hit_benchmark[unbounded]` | 0.0005632027903211858 | 0.0005338717718163492 | 5.21% | 5.49% | 1.05x | ✅ |
| `internal_cache_hit_microbenchmark[bounded]` | 2.7562282804004883e-05 | 1.6955513330359823e-05 | 38.48% | 62.56% | 1.63x | ✅ |
| `internal_cache_hit_microbenchmark[unbounded]` | 2.7585124996333587e-05 | 1.6966131539439222e-05 | 38.50% | 62.59% | 1.63x | ✅ |
| `internal_cache_miss_microbenchmark[bounded]` | 1.817646229221904e-05 | 1.007049160738156e-05 | 44.60% | 80.49% | 1.80x | ✅ |
| `internal_cache_miss_microbenchmark[unbounded]` | 1.833491169352161e-05 | 1.0030141503256446e-05 | 45.29% | 82.80% | 1.83x | ✅ |
| `internal_task_done_callback_microbenchmark[cancelled-bounded]` | 0.0005332116200954361 | 0.0004996693473156542 | 6.29% | 6.71% | 1.07x | ✅ |
| `internal_task_done_callback_microbenchmark[cancelled-unbounded]` | 0.0005284591036861054 | 0.0004914889683213832 | 7.00% | 7.52% | 1.08x | ✅ |
| `internal_task_done_callback_microbenchmark[exception-bounded]` | 0.2018241284000169 | 0.1987582969999721 | 1.52% | 1.54% | 1.02x | ✅ |
| `internal_task_done_callback_microbenchmark[exception-unbounded]` | 0.20170999133334058 | 0.19991915150001205 | 0.89% | 0.90% | 1.01x | ✅ |
| `internal_task_done_callback_microbenchmark[finished-bounded]` | 0.0006455973743274115 | 0.0005834017153334248 | 9.63% | 10.66% | 1.11x | ✅ |
| `internal_task_done_callback_microbenchmark[finished-unbounded]` | 0.000650131684672888 | 0.0005909966386853471 | 9.10% | 10.01% | 1.10x | ✅ |
