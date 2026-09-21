---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
TextureData
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [TextureData](texture-data.md).getSize()

Total buffer size in bytes. The loading screen sums it across sprite sheets for the memory budget readout.

```cpp
unsigned int getSize();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-get-size.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-get-size.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
