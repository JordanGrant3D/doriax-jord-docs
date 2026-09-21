[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
TextureRender
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [TextureRender](texture-render.md).getMetalHandler()

Metal texture handle for native interop on Apple builds compositing the CharacterController portrait.

```cpp
const void* getMetalHandler() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-render/texture-render-get-metal-handler.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-render/texture-render-get-metal-handler.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
