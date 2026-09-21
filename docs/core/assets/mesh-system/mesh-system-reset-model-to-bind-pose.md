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

## [MeshSystem](mesh-system.md).resetModelToBindPose

Returns every imported node to the file bind pose. A CharacterController script resets the hero before the kit turntable spins so celebration poses never leak into outfit previews.

```cpp
void resetModelToBindPose(ModelComponent& model);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-reset-model-to-bind-pose.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-reset-model-to-bind-pose.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
