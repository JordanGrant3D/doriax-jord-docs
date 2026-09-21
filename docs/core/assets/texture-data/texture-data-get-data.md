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

## [TextureData](texture-data.md).getData()

Raw pixel pointer for custom CPU work such as software-tinting the CharacterController damage flash. Null after `releaseImageData()`.

```cpp
void* getData();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-get-data.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-get-data.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
