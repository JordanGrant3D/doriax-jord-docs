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

## [TextureData](texture-data.md).getBytesPerChannel()

Static helper returning bytes per channel for a format (`2` for `RED16`, `1` otherwise). The minimap uploader uses it to stride 16-bit heightmap rows.

```cpp
static int getBytesPerChannel(ColorFormat format);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-get-bytes-per-channel.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-get-bytes-per-channel.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
