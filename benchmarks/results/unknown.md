#### [unknown](https://github.com/BobTheBuidler/async-lru/blob/compile/unknown) - [view benchmarks](https://github.com/BobTheBuidler/async-lru/blob/compile/unknown)

| Function | Reference Mean | Faster Mean | % Change | Speedup (%) | x Faster | Faster |
|----------|---------------|-------------|----------|-------------|----------|--------|
| `cache_clear_benchmark[bounded]` | 8.759631697625508e-07 | 4.902206546990315e-07 | 44.04% | 78.69% | 1.79x | ✅ |
| `cache_clear_benchmark[meth-bounded]` | 1.135259160570996e-06 | 4.927378702993571e-07 | 56.60% | 130.40% | 2.30x | ✅ |
| `cache_clear_benchmark[meth-unbounded]` | 1.1378561857183965e-06 | 4.908194320464027e-07 | 56.86% | 131.83% | 2.32x | ✅ |
| `cache_clear_benchmark[unbounded]` | 8.778861262886259e-07 | 4.904350576160292e-07 | 44.13% | 79.00% | 1.79x | ✅ |
| `cache_fill_eviction_benchmark` | 0.09941921419999886 | 0.09621799590909254 | 3.22% | 3.33% | 1.03x | ✅ |
| `cache_hit_benchmark[bounded]` | 0.0010649831357882225 | 0.0005838662740322925 | 45.18% | 82.40% | 1.82x | ✅ |
| `cache_hit_benchmark[meth-bounded]` | 0.0021628638949670554 | 0.001936171547430792 | 10.48% | 11.71% | 1.12x | ✅ |
| `cache_hit_benchmark[meth-unbounded]` | 0.002289051227586159 | 0.0019315826111108794 | 15.62% | 18.51% | 1.19x | ✅ |
| `cache_hit_benchmark[unbounded]` | 0.0010752861873615188 | 0.0005788320525315796 | 46.17% | 85.77% | 1.86x | ✅ |
| `cache_info_benchmark[bounded]` | 0.0005076838159281656 | 0.00040708371889037353 | 19.82% | 24.71% | 1.25x | ✅ |
| `cache_info_benchmark[meth-bounded]` | 0.0005803112680596127 | 0.0004061005864022274 | 30.02% | 42.90% | 1.43x | ✅ |
| `cache_info_benchmark[meth-unbounded]` | 0.0005817477660331701 | 0.00040750534933566164 | 29.95% | 42.76% | 1.43x | ✅ |
| `cache_info_benchmark[unbounded]` | 0.0005052470897958815 | 0.00041062059338858815 | 18.73% | 23.04% | 1.23x | ✅ |
| `cache_invalidate_benchmark[bounded]` | 7.597063384032595e-05 | 2.8635407029348207e-05 | 62.31% | 165.30% | 2.65x | ✅ |
| `cache_invalidate_benchmark[meth-bounded]` | 0.0002559833620577583 | 0.0002114780172143554 | 17.39% | 21.04% | 1.21x | ✅ |
| `cache_invalidate_benchmark[meth-unbounded]` | 0.0002555945039240758 | 0.0002121686565524427 | 16.99% | 20.47% | 1.20x | ✅ |
| `cache_invalidate_benchmark[unbounded]` | 7.563961274789973e-05 | 2.848648741952672e-05 | 62.34% | 165.53% | 2.66x | ✅ |
| `cache_miss_benchmark[bounded]` | 0.00023055932558137422 | 0.00019525263313608773 | 15.31% | 18.08% | 1.18x | ✅ |
| `cache_miss_benchmark[meth-bounded]` | 0.00029175247604803974 | 0.0002666285758517924 | 8.61% | 9.42% | 1.09x | ✅ |
| `cache_miss_benchmark[meth-unbounded]` | 0.0002935423769467573 | 0.0002662439226196308 | 9.30% | 10.25% | 1.10x | ✅ |
| `cache_miss_benchmark[unbounded]` | 0.00022942842942948413 | 0.00019428005747122325 | 15.32% | 18.09% | 1.18x | ✅ |
| `cache_ttl_expiry_benchmark[bounded]` | 1.9089812404849603e-05 | 1.8783124455226072e-05 | 1.61% | 1.63% | 1.02x | ✅ |
| `cache_ttl_expiry_benchmark[meth-bounded]` | 2.1659074820834028e-05 | 2.081327756927775e-05 | 3.91% | 4.06% | 1.04x | ✅ |
| `cache_ttl_expiry_benchmark[meth-unbounded]` | 2.1241322128898997e-05 | 2.0973285835638545e-05 | 1.26% | 1.28% | 1.01x | ✅ |
| `cache_ttl_expiry_benchmark[unbounded]` | 1.897195168344931e-05 | 1.8244335258014872e-05 | 3.84% | 3.99% | 1.04x | ✅ |
| `concurrent_cache_hit_benchmark[bounded]` | 0.0005635349458602097 | 0.0005080989850948246 | 9.84% | 10.91% | 1.11x | ✅ |
| `concurrent_cache_hit_benchmark[meth-bounded]` | 0.0006828746661019344 | 0.0006551742189843837 | 4.06% | 4.23% | 1.04x | ✅ |
| `concurrent_cache_hit_benchmark[meth-unbounded]` | 0.0006805648214286261 | 0.000656938004006247 | 3.47% | 3.60% | 1.04x | ✅ |
| `concurrent_cache_hit_benchmark[unbounded]` | 0.0005664954615370404 | 0.0005050430552187388 | 10.85% | 12.17% | 1.12x | ✅ |
| `internal_cache_hit_microbenchmark[bounded]` | 2.8182427915247435e-05 | 8.908635712350801e-06 | 68.39% | 216.35% | 3.16x | ✅ |
| `internal_cache_hit_microbenchmark[unbounded]` | 2.8018951245792146e-05 | 8.78499796584195e-06 | 68.65% | 218.94% | 3.19x | ✅ |
| `internal_cache_miss_microbenchmark[bounded]` | 1.846073180549162e-05 | 3.553246913678495e-06 | 80.75% | 419.55% | 5.20x | ✅ |
| `internal_cache_miss_microbenchmark[unbounded]` | 1.847987814333739e-05 | 3.483575593099697e-06 | 81.15% | 430.49% | 5.30x | ✅ |
| `internal_task_done_callback_microbenchmark[cancelled-bounded]` | 0.0005332886900723275 | 0.0004695798733400227 | 11.95% | 13.57% | 1.14x | ✅ |
| `internal_task_done_callback_microbenchmark[cancelled-unbounded]` | 0.000534914572536923 | 0.00047265969655192785 | 11.64% | 13.17% | 1.13x | ✅ |
| `internal_task_done_callback_microbenchmark[exception-bounded]` | 0.20336519460000774 | 0.2013789700000018 | 0.98% | 0.99% | 1.01x | ✅ |
| `internal_task_done_callback_microbenchmark[exception-unbounded]` | 0.19997012816666407 | 0.1996618192000085 | 0.15% | 0.15% | 1.00x | ✅ |
| `internal_task_done_callback_microbenchmark[finished-bounded]` | 0.0006501970184087779 | 0.0005238348024418133 | 19.43% | 24.12% | 1.24x | ✅ |
| `internal_task_done_callback_microbenchmark[finished-unbounded]` | 0.0006513570289175628 | 0.0005241863843303013 | 19.52% | 24.26% | 1.24x | ✅ |
