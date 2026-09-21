[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
EntityHandle
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## EntityHandle

The base class for all high-level Doriax objects that wrap an ECS entity. `EntityHandle` stores a reference to its owning `Scene` and its `Entity` identifier, giving C++ code a convenient handle to a scene entity without having to interact with the raw ECS API.

Most classes in the Doriax API — `Object`, `Action`, `Sound`, `Skybox`, etc. — inherit from `EntityHandle`.

## Properties

| Type | Property | Description |
| :--- | :--- | :--- |
| [**std::string**](https://en.cppreference.com/w/cpp/string/basic_string) | [**name**](entityhandle-name.md) | Human-readable tag for this entity, used by the editor hierarchy and for debugging or lookup. |
| [**bool**](https://en.cppreference.com/cpp/keyword/bool) | [**entityOwned**](entityhandle-entity-owned.md) | Whether this handle owns its entity and destroys it when the handle is destroyed. |

## Constructors

| Arguments | Description |
| :--- | :--- |
| [**Scene\***](../scene/scene.md) scene | Creates a new entity in the scene. The handle owns the entity. |
| [**Scene\***](../scene/scene.md) scene, [**Entity**](entity.md) entity | Wraps an existing entity. The handle does not own the entity. |
| [**const**](https://en.cppreference.com/cpp/keyword/const) [**EntityHandle&**](entityhandle.md) rhs | Copy constructor. Copies are non-owning observers; the source keeps sole ownership. |
| [**EntityHandle&&**](entityhandle.md) rhs | Move constructor. Transfers ownership to the new handle and leaves the source non-owning. |

`EntityHandle` follows single-owner semantics so an entity is never destroyed twice. Copying produces a non-owning observer that references the same entity without owning it, while moving transfers ownership to the destination and leaves the source as a non-owning observer. Wrapping an existing entity with `EntityHandle(scene, entity)` never takes ownership, so wrapped handles are safe to copy and discard.

## Methods

| Result | Method | Arguments | Description |
| :--- | :--- | :--- | :--- |
| [**Scene\***](../scene/scene.md) | [**getScene**](entityhandle-get-scene.md) |  | Returns a pointer to the owning scene. |
| [**Entity**](entity.md) | [**getEntity**](entityhandle-get-entity.md) |  | Returns the raw ECS entity identifier. |


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
