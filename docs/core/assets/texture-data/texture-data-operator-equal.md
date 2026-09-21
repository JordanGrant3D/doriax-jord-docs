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

## [TextureData](texture-data.md).operator==(const TextureData& v)

Compares buffer contents, letting the atlas packer skip identical CharacterController frames.

```cpp
bool operator == ( const TextureData& v ) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-operator-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-operator-equal.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
