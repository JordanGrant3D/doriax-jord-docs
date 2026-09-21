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

## [Mesh](mesh.md).renderInReflectionProbes

Whether the character appears in reflection-probe captures. A CharacterController script hides first-person arms from probes to avoid feedback artifacts, verifying with `isRenderInReflectionProbes`.

```cpp
void setRenderInReflectionProbes(bool renderInReflectionProbes);
bool isRenderInReflectionProbes() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-render-in-reflection-probes.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-render-in-reflection-probes.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
