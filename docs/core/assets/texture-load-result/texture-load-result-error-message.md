---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
TextureLoadResult
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [TextureLoadResult](texture-load-result.md).errorMessage

Human-readable failure reason (missing file, empty image). Show it on the loading-screen retry prompt when `state` is `Failed`.

```cpp
std::string errorMessage;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-load-result/texture-load-result-error-message.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-load-result/texture-load-result-error-message.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
