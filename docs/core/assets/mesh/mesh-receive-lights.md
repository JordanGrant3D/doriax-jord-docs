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

## [Mesh](mesh.md).receiveLights

Whether dynamic lights affect the character. A CharacterController script disables light reception during a night-vision power-up so the hero renders flat, then re-enables it when the effect ends.

```cpp
void setReceiveLights(bool receiveLights);
bool isReceiveLights() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-receive-lights.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-receive-lights.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
