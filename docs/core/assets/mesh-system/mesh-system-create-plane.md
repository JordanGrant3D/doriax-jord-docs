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

## [MeshSystem](mesh-system.md).createPlane

Builds a flat grid mesh. A CharacterController script builds the locker-room floor under the outfit station with tiled repeats so the kit preview grounds correctly.

```cpp
void createPlane(MeshComponent& mesh, float width=1, float depth=1, unsigned int tiles=1);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-create-plane.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-create-plane.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
