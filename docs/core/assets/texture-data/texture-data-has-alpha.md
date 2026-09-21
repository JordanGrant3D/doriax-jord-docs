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

## [TextureData](texture-data.md).hasAlpha()

Returns `true` when the decoded buffer carries an alpha channel. Sprite-sheet frames with alpha route the CharacterController ghost effect into the transparent pass.

```cpp
bool hasAlpha();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-has-alpha.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-has-alpha.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
