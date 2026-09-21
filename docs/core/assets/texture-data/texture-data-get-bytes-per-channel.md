[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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
