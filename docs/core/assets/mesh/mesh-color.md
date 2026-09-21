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

## [Mesh](mesh.md).color

Base tint of the character mesh, multiplied with the outfit texture. A CharacterController script calls `setColor` for team-outfit swaps (red vs blue armor) and reads `getColor` back to replicate the tint over the network.

```cpp
void setColor(Vector4 color);
void setColor(const float red, const float green, const float blue, const float alpha);
void setColor(const float red, const float green, const float blue);
Vector4 getColor() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-color.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-color.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
