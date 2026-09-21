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

## [Mesh](mesh.md).mirror

Turns the mesh into a planar mirror with an optional [**Vector3**](../../../core/maths/vector3/vector3.md) normal. A CharacterController script marks the locker-room mirror wall with `setAsMirror`, then calls `removeMirror` when the level unloads, guarding with `isMirror`.

```cpp
void setAsMirror();
void setAsMirror(Vector3 normal);
void removeMirror();
bool isMirror() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-mirror.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-mirror.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
