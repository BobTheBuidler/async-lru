#### [unknown](https://github.com/BobTheBuidler/async-lru/blob/compile/unknown) - [view benchmarks](https://github.com/BobTheBuidler/async-lru/blob/compile/unknown)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `cache_clear_benchmark[bounded]` | 9.375418585489175e-07 | 5.058156638076846e-07 | 46.05% | 85.35% | 1.85x | ✅ |
| `cache_clear_benchmark[meth-bounded]` | 1.1715688469717621e-06 | 5.178554665171956e-07 | 55.80% | 126.23% | 2.26x | ✅ |
| `cache_clear_benchmark[meth-unbounded]` | 1.173051578847497e-06 | 5.345209028445552e-07 | 54.43% | 119.46% | 2.19x | ✅ |
| `cache_clear_benchmark[unbounded]` | 9.169720543345423e-07 | 5.100009028203336e-07 | 44.38% | 79.80% | 1.80x | ✅ |
| `cache_fill_eviction_benchmark` | 0.09746179427273463 | 0.09240592745454344 | 5.19% | 5.47% | 1.05x | ✅ |
| `cache_hit_benchmark[bounded]` | 0.0010491037451428806 | 0.0005476935333334111 | 47.79% | 91.55% | 1.92x | ✅ |
| `cache_hit_benchmark[meth-bounded]` | 0.0021299393124997066 | 0.0018306029848773353 | 14.05% | 16.35% | 1.16x | ✅ |
| `cache_hit_benchmark[meth-unbounded]` | 0.002136250945770467 | 0.0018391888212924352 | 13.91% | 16.15% | 1.16x | ✅ |
| `cache_hit_benchmark[unbounded]` | 0.0010532252341360299 | 0.0005480565201166528 | 47.96% | 92.17% | 1.92x | ✅ |
| `cache_info_benchmark[bounded]` | 0.0005163552446351086 | 0.00040484870617922216 | 21.59% | 27.54% | 1.28x | ✅ |
| `cache_info_benchmark[meth-bounded]` | 0.0005854442473116991 | 0.0004087347096220604 | 30.18% | 43.23% | 1.43x | ✅ |
| `cache_info_benchmark[meth-unbounded]` | 0.0005774257882990224 | 0.00041156166225161847 | 28.72% | 40.30% | 1.40x | ✅ |
| `cache_info_benchmark[unbounded]` | 0.000515301062467816 | 0.0004058569926078459 | 21.24% | 26.97% | 1.27x | ✅ |
| `cache_invalidate_benchmark[bounded]` | 7.542649838702729e-05 | 2.8441873768244916e-05 | 62.29% | 165.20% | 2.65x | ✅ |
| `cache_invalidate_benchmark[meth-bounded]` | 0.00025976370812347483 | 0.00021203847916119095 | 18.37% | 22.51% | 1.23x | ✅ |
| `cache_invalidate_benchmark[meth-unbounded]` | 0.0002566594231023614 | 0.00021472509124189964 | 16.34% | 19.53% | 1.20x | ✅ |
| `cache_invalidate_benchmark[unbounded]` | 7.568970796264462e-05 | 2.8470007412721346e-05 | 62.39% | 165.86% | 2.66x | ✅ |
| `cache_miss_benchmark[bounded]` | 0.0002303257338936299 | 0.00018841227536209654 | 18.20% | 22.25% | 1.22x | ✅ |
| `cache_miss_benchmark[meth-bounded]` | 0.00028919171929852835 | 0.0002569776696428539 | 11.14% | 12.54% | 1.13x | ✅ |
| `cache_miss_benchmark[meth-unbounded]` | 0.0002882251415661551 | 0.00025467532647102957 | 11.64% | 13.17% | 1.13x | ✅ |
| `cache_miss_benchmark[unbounded]` | 0.00023038805044531122 | 0.0001881306712326876 | 18.34% | 22.46% | 1.22x | ✅ |
| `cache_ttl_expiry_benchmark[bounded]` | 1.8897233306800944e-05 | 1.8343834344987956e-05 | 2.93% | 3.02% | 1.03x | ✅ |
| `cache_ttl_expiry_benchmark[meth-bounded]` | 2.1089019483790684e-05 | 2.1496693346083738e-05 | -1.93% | -1.90% | 0.98x | ❌ |
| `cache_ttl_expiry_benchmark[meth-unbounded]` | 2.1183108583763803e-05 | 2.1224544700799577e-05 | -0.20% | -0.20% | 1.00x | ❌ |
| `cache_ttl_expiry_benchmark[unbounded]` | 1.8796857617203732e-05 | 1.7796382075350017e-05 | 5.32% | 5.62% | 1.06x | ✅ |
| `concurrent_cache_hit_benchmark[bounded]` | 0.0005594395798814625 | 0.000507199126404816 | 9.34% | 10.30% | 1.10x | ✅ |
| `concurrent_cache_hit_benchmark[meth-bounded]` | 0.0006781729172728293 | 0.000652808180180128 | 3.74% | 3.89% | 1.04x | ✅ |
| `concurrent_cache_hit_benchmark[meth-unbounded]` | 0.0006719058027442916 | 0.0006551383991305091 | 2.50% | 2.56% | 1.03x | ✅ |
| `concurrent_cache_hit_benchmark[unbounded]` | 0.0005581297058825765 | 0.0005123124579830422 | 8.21% | 8.94% | 1.09x | ✅ |
| `internal_cache_hit_microbenchmark[bounded]` | 2.943844275386725e-05 | 1.0873253709104834e-05 | 63.06% | 170.74% | 2.71x | ✅ |
| `internal_cache_hit_microbenchmark[unbounded]` | 2.9116103182429012e-05 | 1.0998100807206096e-05 | 62.23% | 164.74% | 2.65x | ✅ |
| `internal_cache_miss_microbenchmark[bounded]` | 1.93893395555812e-05 | 4.065715901462117e-06 | 79.03% | 376.90% | 4.77x | ✅ |
| `internal_cache_miss_microbenchmark[unbounded]` | 1.9293248627095135e-05 | 4.0019302760704646e-06 | 79.26% | 382.10% | 4.82x | ✅ |
| `internal_task_done_callback_microbenchmark[cancelled-bounded]` | 0.0005425585190415409 | 0.00047481203727337066 | 12.49% | 14.27% | 1.14x | ✅ |
| `internal_task_done_callback_microbenchmark[cancelled-unbounded]` | 0.0005478923542573647 | 0.00047602336235519355 | 13.12% | 15.10% | 1.15x | ✅ |
| `internal_task_done_callback_microbenchmark[exception-bounded]` | 0.2037458861999994 | 0.2029441268000028 | 0.39% | 0.40% | 1.00x | ✅ |
| `internal_task_done_callback_microbenchmark[exception-unbounded]` | 0.2040712773999985 | 0.2003935454000043 | 1.80% | 1.84% | 1.02x | ✅ |
| `internal_task_done_callback_microbenchmark[finished-bounded]` | 0.0006370682289399168 | 0.0005281679138123009 | 17.09% | 20.62% | 1.21x | ✅ |
| `internal_task_done_callback_microbenchmark[finished-unbounded]` | 0.0006300290528921381 | 0.000535230621516589 | 15.05% | 17.71% | 1.18x | ✅ |
