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

## [Mesh](mesh.md).addInstance

Appends one GPU instance. A CharacterController script lines up teammate helmets along the bench with the position overload, and tints each with [**Vector4**](../../../core/maths/vector4/vector4.md) away-kit colors via the full overload.

```cpp
void addInstance(InstanceData instance);
void addInstance(Vector3 position);
void addInstance(float x, float y, float z);
void addInstance(Vector3 position, Quaternion rotation, Vector3 scale);
void addInstance(Vector3 position, Quaternion rotation, Vector3 scale, Vector4 color);
void addInstance(Vector3 position, Quaternion rotation, Vector3 scale, Vector4 color, Rect textureRect);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-add-instance.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-add-instance.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
