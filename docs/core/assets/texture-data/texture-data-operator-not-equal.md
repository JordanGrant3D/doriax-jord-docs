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

## [TextureData](texture-data.md).operator!=(const TextureData& v)

Inverse of `operator==`: spots when a tinted damage-flash copy diverges from the source frame.

```cpp
bool operator != ( const TextureData& v ) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-operator-not-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-operator-not-equal.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
