---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
MeshSystem
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [MeshSystem](mesh-system.md).createTorus

Builds a torus mesh. A CharacterController script rings the character turntable with a glowing halo so outfit-swap streams read clearly on video.

```cpp
void createTorus(MeshComponent& mesh, float radius=1, float ringRadius=0.5, unsigned int sides=36, unsigned int rings=16);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-create-torus.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-create-torus.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
