---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Texture
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Texture](texture.md).minFilter

Minification filter used when the sprite is rendered smaller than its native resolution. Trilinear filtering keeps the CharacterController sprite sheet crisp at a distance; only `NEAREST` and `LINEAR` are valid for magnification (see sibling `magFilter` in [texture-mag-filter.md](texture-mag-filter.md)).

```cpp
void setMinFilter(TextureFilter filter);
TextureFilter getMinFilter() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-min-filter.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-min-filter.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
