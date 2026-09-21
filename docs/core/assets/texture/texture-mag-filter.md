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

## [Texture](texture.md).magFilter

Magnification filter used when the texture is rendered larger than its native resolution. `NEAREST` gives crisp pixel-art sprites for the CharacterController HUD, while `LINEAR` smooths scaled-up portraits. Only `NEAREST` and `LINEAR` are valid here.

```cpp
void setMagFilter(TextureFilter filter);
TextureFilter getMagFilter() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-mag-filter.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-mag-filter.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
