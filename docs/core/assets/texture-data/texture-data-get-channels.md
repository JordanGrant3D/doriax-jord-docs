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

## [TextureData](texture-data.md).getChannels()

Channel count (`4` for RGBA sprite sheets). Alpha-aware UI tinting checks this before sampling channel 3.

```cpp
int getChannels();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-get-channels.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-get-channels.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
