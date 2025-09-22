#### [unknown](https://github.com/BobTheBuidler/async-lru/blob/compile/unknown) - [view benchmarks](https://github.com/BobTheBuidler/async-lru/blob/compile/unknown)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `cache_clear_benchmark[bounded]` | 8.78836440991324e-07 | 5.167177208858919e-07 | 41.20% | 70.08% | 1.70x | ✅ |
| `cache_clear_benchmark[meth-bounded]` | 1.1230928682764507e-06 | 5.168053263855018e-07 | 53.98% | 117.31% | 2.17x | ✅ |
| `cache_clear_benchmark[meth-unbounded]` | 1.1298154962322726e-06 | 5.142638281509609e-07 | 54.48% | 119.70% | 2.20x | ✅ |
| `cache_clear_benchmark[unbounded]` | 8.745084482546129e-07 | 5.034872832805601e-07 | 42.43% | 73.69% | 1.74x | ✅ |
| `cache_fill_eviction_benchmark` | 0.0972568729090943 | 0.09292483845454119 | 4.45% | 4.66% | 1.05x | ✅ |
| `cache_hit_benchmark[bounded]` | 0.0010526669242083384 | 0.0005361727031958962 | 49.07% | 96.33% | 1.96x | ✅ |
| `cache_hit_benchmark[meth-bounded]` | 0.0021376077214906096 | 0.0018217561832059807 | 14.78% | 17.34% | 1.17x | ✅ |
| `cache_hit_benchmark[meth-unbounded]` | 0.002163544580085386 | 0.001835922946565666 | 15.14% | 17.85% | 1.18x | ✅ |
| `cache_hit_benchmark[unbounded]` | 0.0010451696812229933 | 0.0005358234465518308 | 48.73% | 95.06% | 1.95x | ✅ |
| `cache_info_benchmark[bounded]` | 0.0005080521809621726 | 0.0003952239494007724 | 22.21% | 28.55% | 1.29x | ✅ |
| `cache_info_benchmark[meth-bounded]` | 0.000577668280608968 | 0.0003984347972486318 | 31.03% | 44.98% | 1.45x | ✅ |
| `cache_info_benchmark[meth-unbounded]` | 0.0005779353218391152 | 0.00040011914285743904 | 30.77% | 44.44% | 1.44x | ✅ |
| `cache_info_benchmark[unbounded]` | 0.0005034559643219831 | 0.0003927808998334144 | 21.98% | 28.18% | 1.28x | ✅ |
| `cache_invalidate_benchmark[bounded]` | 7.516596287019959e-05 | 2.628109732896958e-05 | 65.04% | 186.01% | 2.86x | ✅ |
| `cache_invalidate_benchmark[meth-bounded]` | 0.00025869714360285146 | 0.00021509749808331074 | 16.85% | 20.27% | 1.20x | ✅ |
| `cache_invalidate_benchmark[meth-unbounded]` | 0.0002576122529818718 | 0.00021546611395116582 | 16.36% | 19.56% | 1.20x | ✅ |
| `cache_invalidate_benchmark[unbounded]` | 7.636902478134053e-05 | 2.6503516621944053e-05 | 65.30% | 188.15% | 2.88x | ✅ |
| `cache_miss_benchmark[bounded]` | 0.00022931782954518164 | 0.000185785817142557 | 18.98% | 23.43% | 1.23x | ✅ |
| `cache_miss_benchmark[meth-bounded]` | 0.00029160212499904407 | 0.0002524839204896275 | 13.41% | 15.49% | 1.15x | ✅ |
| `cache_miss_benchmark[meth-unbounded]` | 0.00029517830421868675 | 0.00025649342521964124 | 13.11% | 15.08% | 1.15x | ✅ |
| `cache_miss_benchmark[unbounded]` | 0.00022967890993733553 | 0.00018675753908421747 | 18.69% | 22.98% | 1.23x | ✅ |
| `cache_ttl_expiry_benchmark[bounded]` | 1.8686160795395425e-05 | 1.8031404829957186e-05 | 3.50% | 3.63% | 1.04x | ✅ |
| `cache_ttl_expiry_benchmark[meth-bounded]` | 2.112861437899229e-05 | 2.0625404173380016e-05 | 2.38% | 2.44% | 1.02x | ✅ |
| `cache_ttl_expiry_benchmark[meth-unbounded]` | 2.1138678529332256e-05 | 2.2454842469749896e-05 | -6.23% | -5.86% | 0.94x | ❌ |
| `cache_ttl_expiry_benchmark[unbounded]` | 1.8907481181528505e-05 | 1.7908765025786584e-05 | 5.28% | 5.58% | 1.06x | ✅ |
| `concurrent_cache_hit_benchmark[bounded]` | 0.0005568491359510553 | 0.0005079819127517365 | 8.78% | 9.62% | 1.10x | ✅ |
| `concurrent_cache_hit_benchmark[meth-bounded]` | 0.0006854266196951108 | 0.000655642335236105 | 4.35% | 4.54% | 1.05x | ✅ |
| `concurrent_cache_hit_benchmark[meth-unbounded]` | 0.0006885580725745771 | 0.0006626151180383687 | 3.77% | 3.92% | 1.04x | ✅ |
| `concurrent_cache_hit_benchmark[unbounded]` | 0.0005613069696949831 | 0.0005061953069169944 | 9.82% | 10.89% | 1.11x | ✅ |
| `internal_cache_hit_microbenchmark[bounded]` | 2.7703205768417932e-05 | 9.804417837965224e-06 | 64.61% | 182.56% | 2.83x | ✅ |
| `internal_cache_hit_microbenchmark[unbounded]` | 2.7562472568090536e-05 | 9.500250894369546e-06 | 65.53% | 190.12% | 2.90x | ✅ |
| `internal_cache_miss_microbenchmark[bounded]` | 1.8148200822009775e-05 | 3.6894145410516787e-06 | 79.67% | 391.90% | 4.92x | ✅ |
| `internal_cache_miss_microbenchmark[unbounded]` | 1.807674150179241e-05 | 3.6933467166623365e-06 | 79.57% | 389.44% | 4.89x | ✅ |
| `internal_task_done_callback_microbenchmark[cancelled-bounded]` | 0.0005411818813652376 | 0.00046859772431666997 | 13.41% | 15.49% | 1.15x | ✅ |
| `internal_task_done_callback_microbenchmark[cancelled-unbounded]` | 0.0005497401890786513 | 0.00047075431731732686 | 14.37% | 16.78% | 1.17x | ✅ |
| `internal_task_done_callback_microbenchmark[exception-bounded]` | 0.20069448780001267 | 0.1990198755999927 | 0.83% | 0.84% | 1.01x | ✅ |
| `internal_task_done_callback_microbenchmark[exception-unbounded]` | 0.19949758766665582 | 0.19871183116666202 | 0.39% | 0.40% | 1.00x | ✅ |
| `internal_task_done_callback_microbenchmark[finished-bounded]` | 0.0006421773803470054 | 0.0005234431078222437 | 18.49% | 22.68% | 1.23x | ✅ |
| `internal_task_done_callback_microbenchmark[finished-unbounded]` | 0.0006438821416839678 | 0.0005307505495590745 | 17.57% | 21.32% | 1.21x | ✅ |
