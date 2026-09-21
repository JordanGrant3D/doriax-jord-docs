---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Mesh
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Mesh](mesh.md).alpha

Opacity of the character mesh (`1.0` opaque, `0.0` invisible). A CharacterController script fades `alpha` toward `0.3f` while the character is cloaked, then checks `getAlpha` before allowing stealth takedowns.

```cpp
void setAlpha(const float alpha);
float getAlpha() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-alpha.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-alpha.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
