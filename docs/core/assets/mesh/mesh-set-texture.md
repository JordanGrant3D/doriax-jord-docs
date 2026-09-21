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

## [Mesh](mesh.md).setTexture

Assigns the outfit texture by file path, by raw texture data, or from a live framebuffer (for animated jersey numbers). A CharacterController script swaps home/away kits with the path overload on team change.

```cpp
void setTexture(const std::string& path);
void setTexture(const std::string& id, TextureData data);
void setTexture(Framebuffer* framebuffer);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-set-texture.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-set-texture.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
