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

## [Texture](texture.md).getId()

Returns the pool cache key. For an SVG icon with a non-default `svgScale` the id encodes the scale (`"icon.svg?svgScale=4"`); use `getPath()` for the plain file path.

```cpp
std::string getId() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-get-id.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-get-id.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
