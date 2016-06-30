/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/module_fatal.h"

#include <fatal/type/enum.h>
#include <fatal/type/variant_traits.h>

#include <type_traits>

namespace test_cpp2 { namespace cpp_reflection {

namespace thrift_fatal_impl_detail {

class union1_Type_enum_traits {
  struct Type__struct_unique_strings_list {
    using ui = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ui;
    using ud = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ud;
    using us = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::us;
    using ue = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ue;
  };

  public:
  using type = ::test_cpp2::cpp_reflection::union1::Type;
  using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::Type;
  using str = Type__struct_unique_strings_list;
  using name_to_value = ::fatal::type_map<
    ::fatal::type_pair<
      str::ui,
      std::integral_constant<type, type::ui>
    >,
    ::fatal::type_pair<
      str::ud,
      std::integral_constant<type, type::ud>
    >,
    ::fatal::type_pair<
      str::us,
      std::integral_constant<type, type::us>
    >,
    ::fatal::type_pair<
      str::ue,
      std::integral_constant<type, type::ue>
    >
  >;

  class annotations {
    struct annotations__unique_annotations_keys {};

    struct annotations__unique_annotations_values {};

    public:
    using keys = annotations__unique_annotations_keys;
    using values = annotations__unique_annotations_values;
    using map = ::fatal::type_map<
    >;
  };

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::ui: return "ui";
      case type::ud: return "ud";
      case type::us: return "us";
      case type::ue: return "ue";
      default: return fallback;
    }
  }
};

} // thrift_fatal_impl_detail

FATAL_REGISTER_ENUM_TRAITS(
  ::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::union1_Type_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::union1_Type_enum_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(0ull)
  >
);

namespace thrift_fatal_impl_detail {

class union1_variant_traits {
  struct union1__struct_unique_identifiers_list {
    using ui = std::integral_constant<::test_cpp2::cpp_reflection::union1::Type, ::test_cpp2::cpp_reflection::union1::Type::ui>;
    using ud = std::integral_constant<::test_cpp2::cpp_reflection::union1::Type, ::test_cpp2::cpp_reflection::union1::Type::ud>;
    using us = std::integral_constant<::test_cpp2::cpp_reflection::union1::Type, ::test_cpp2::cpp_reflection::union1::Type::us>;
    using ue = std::integral_constant<::test_cpp2::cpp_reflection::union1::Type, ::test_cpp2::cpp_reflection::union1::Type::ue>;
  };

  struct union1__struct_unique_getters_list {
    struct ui {
      auto operator ()(union1 const &variant) const
        -> decltype(std::declval<union1 const &>().get_ui())
      {
        return variant.get_ui();
      }

      auto operator ()(union1 &variant) const
        -> decltype(std::declval<union1 &>().mutable_ui())
      {
        return variant.mutable_ui();
      }

      auto operator ()(union1 &&variant) const
        -> decltype(std::declval<union1 &&>().move_ui())
      {
        return std::move(variant).move_ui();
      }
    };

    struct ud {
      auto operator ()(union1 const &variant) const
        -> decltype(std::declval<union1 const &>().get_ud())
      {
        return variant.get_ud();
      }

      auto operator ()(union1 &variant) const
        -> decltype(std::declval<union1 &>().mutable_ud())
      {
        return variant.mutable_ud();
      }

      auto operator ()(union1 &&variant) const
        -> decltype(std::declval<union1 &&>().move_ud())
      {
        return std::move(variant).move_ud();
      }
    };

    struct us {
      auto operator ()(union1 const &variant) const
        -> decltype(std::declval<union1 const &>().get_us())
      {
        return variant.get_us();
      }

      auto operator ()(union1 &variant) const
        -> decltype(std::declval<union1 &>().mutable_us())
      {
        return variant.mutable_us();
      }

      auto operator ()(union1 &&variant) const
        -> decltype(std::declval<union1 &&>().move_us())
      {
        return std::move(variant).move_us();
      }
    };

    struct ue {
      auto operator ()(union1 const &variant) const
        -> decltype(std::declval<union1 const &>().get_ue())
      {
        return variant.get_ue();
      }

      auto operator ()(union1 &variant) const
        -> decltype(std::declval<union1 &>().mutable_ue())
      {
        return variant.mutable_ue();
      }

      auto operator ()(union1 &&variant) const
        -> decltype(std::declval<union1 &&>().move_ue())
      {
        return std::move(variant).move_ue();
      }
    };
  };

  struct union1__struct_unique_setters_list {
    struct ui {
      template <typename... Args>
      auto operator ()(union1 &variant, Args &&...args) const
        -> decltype(
          std::declval<union1 &>().set_ui(std::forward<Args>(args)...)
        )
      {
        return variant.set_ui(std::forward<Args>(args)...);
      }
    };

    struct ud {
      template <typename... Args>
      auto operator ()(union1 &variant, Args &&...args) const
        -> decltype(
          std::declval<union1 &>().set_ud(std::forward<Args>(args)...)
        )
      {
        return variant.set_ud(std::forward<Args>(args)...);
      }
    };

    struct us {
      template <typename... Args>
      auto operator ()(union1 &variant, Args &&...args) const
        -> decltype(
          std::declval<union1 &>().set_us(std::forward<Args>(args)...)
        )
      {
        return variant.set_us(std::forward<Args>(args)...);
      }
    };

    struct ue {
      template <typename... Args>
      auto operator ()(union1 &variant, Args &&...args) const
        -> decltype(
          std::declval<union1 &>().set_ue(std::forward<Args>(args)...)
        )
      {
        return variant.set_ue(std::forward<Args>(args)...);
      }
    };
  };

  public:
  using type = ::test_cpp2::cpp_reflection::union1;
  using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::union1;
  using id = type::Type;
  using ids = union1__struct_unique_identifiers_list;
  using descriptors = ::fatal::type_list<
    ::fatal::variant_type_descriptor<
      int32_t,
      union1__struct_unique_identifiers_list::ui,
      union1__struct_unique_getters_list::ui,
      union1__struct_unique_setters_list::ui,
      ::apache::thrift::reflected_union_member_metadata<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ui,
        1,
        ::apache::thrift::type_class::integral
      >
    >,
    ::fatal::variant_type_descriptor<
      double,
      union1__struct_unique_identifiers_list::ud,
      union1__struct_unique_getters_list::ud,
      union1__struct_unique_setters_list::ud,
      ::apache::thrift::reflected_union_member_metadata<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ud,
        2,
        ::apache::thrift::type_class::floating_point
      >
    >,
    ::fatal::variant_type_descriptor<
      std::string,
      union1__struct_unique_identifiers_list::us,
      union1__struct_unique_getters_list::us,
      union1__struct_unique_setters_list::us,
      ::apache::thrift::reflected_union_member_metadata<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::us,
        3,
        ::apache::thrift::type_class::string
      >
    >,
    ::fatal::variant_type_descriptor<
       ::test_cpp2::cpp_reflection::enum1,
      union1__struct_unique_identifiers_list::ue,
      union1__struct_unique_getters_list::ue,
      union1__struct_unique_setters_list::ue,
      ::apache::thrift::reflected_union_member_metadata<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ue,
        4,
        ::apache::thrift::type_class::enumeration
      >
    >
  >;

  class annotations {
    struct annotations__unique_annotations_keys {};

    struct annotations__unique_annotations_values {};

    public:
    using keys = annotations__unique_annotations_keys;
    using values = annotations__unique_annotations_values;
    using map = ::fatal::type_map<
    >;
  };

  static id get_id(type const &variant) {
    return variant.getType();
  }

  static bool empty(type const &variant) {
    return variant.getType() == id::__EMPTY__;
  }

  static void clear(type &variant) {
    return variant.__clear();
  }
};

} // thrift_fatal_impl_detail
namespace thrift_fatal_impl_detail {

class union2_Type_enum_traits {
  struct Type__struct_unique_strings_list {
    using ui_2 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ui_2;
    using ud_2 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ud_2;
    using us_2 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::us_2;
    using ue_2 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ue_2;
  };

  public:
  using type = ::test_cpp2::cpp_reflection::union2::Type;
  using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::Type;
  using str = Type__struct_unique_strings_list;
  using name_to_value = ::fatal::type_map<
    ::fatal::type_pair<
      str::ui_2,
      std::integral_constant<type, type::ui_2>
    >,
    ::fatal::type_pair<
      str::ud_2,
      std::integral_constant<type, type::ud_2>
    >,
    ::fatal::type_pair<
      str::us_2,
      std::integral_constant<type, type::us_2>
    >,
    ::fatal::type_pair<
      str::ue_2,
      std::integral_constant<type, type::ue_2>
    >
  >;

  class annotations {
    struct annotations__unique_annotations_keys {};

    struct annotations__unique_annotations_values {};

    public:
    using keys = annotations__unique_annotations_keys;
    using values = annotations__unique_annotations_values;
    using map = ::fatal::type_map<
    >;
  };

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::ui_2: return "ui_2";
      case type::ud_2: return "ud_2";
      case type::us_2: return "us_2";
      case type::ue_2: return "ue_2";
      default: return fallback;
    }
  }
};

} // thrift_fatal_impl_detail

FATAL_REGISTER_ENUM_TRAITS(
  ::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::union2_Type_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::union2_Type_enum_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(0ull)
  >
);

namespace thrift_fatal_impl_detail {

class union2_variant_traits {
  struct union2__struct_unique_identifiers_list {
    using ui_2 = std::integral_constant<::test_cpp2::cpp_reflection::union2::Type, ::test_cpp2::cpp_reflection::union2::Type::ui_2>;
    using ud_2 = std::integral_constant<::test_cpp2::cpp_reflection::union2::Type, ::test_cpp2::cpp_reflection::union2::Type::ud_2>;
    using us_2 = std::integral_constant<::test_cpp2::cpp_reflection::union2::Type, ::test_cpp2::cpp_reflection::union2::Type::us_2>;
    using ue_2 = std::integral_constant<::test_cpp2::cpp_reflection::union2::Type, ::test_cpp2::cpp_reflection::union2::Type::ue_2>;
  };

  struct union2__struct_unique_getters_list {
    struct ui_2 {
      auto operator ()(union2 const &variant) const
        -> decltype(std::declval<union2 const &>().get_ui_2())
      {
        return variant.get_ui_2();
      }

      auto operator ()(union2 &variant) const
        -> decltype(std::declval<union2 &>().mutable_ui_2())
      {
        return variant.mutable_ui_2();
      }

      auto operator ()(union2 &&variant) const
        -> decltype(std::declval<union2 &&>().move_ui_2())
      {
        return std::move(variant).move_ui_2();
      }
    };

    struct ud_2 {
      auto operator ()(union2 const &variant) const
        -> decltype(std::declval<union2 const &>().get_ud_2())
      {
        return variant.get_ud_2();
      }

      auto operator ()(union2 &variant) const
        -> decltype(std::declval<union2 &>().mutable_ud_2())
      {
        return variant.mutable_ud_2();
      }

      auto operator ()(union2 &&variant) const
        -> decltype(std::declval<union2 &&>().move_ud_2())
      {
        return std::move(variant).move_ud_2();
      }
    };

    struct us_2 {
      auto operator ()(union2 const &variant) const
        -> decltype(std::declval<union2 const &>().get_us_2())
      {
        return variant.get_us_2();
      }

      auto operator ()(union2 &variant) const
        -> decltype(std::declval<union2 &>().mutable_us_2())
      {
        return variant.mutable_us_2();
      }

      auto operator ()(union2 &&variant) const
        -> decltype(std::declval<union2 &&>().move_us_2())
      {
        return std::move(variant).move_us_2();
      }
    };

    struct ue_2 {
      auto operator ()(union2 const &variant) const
        -> decltype(std::declval<union2 const &>().get_ue_2())
      {
        return variant.get_ue_2();
      }

      auto operator ()(union2 &variant) const
        -> decltype(std::declval<union2 &>().mutable_ue_2())
      {
        return variant.mutable_ue_2();
      }

      auto operator ()(union2 &&variant) const
        -> decltype(std::declval<union2 &&>().move_ue_2())
      {
        return std::move(variant).move_ue_2();
      }
    };
  };

  struct union2__struct_unique_setters_list {
    struct ui_2 {
      template <typename... Args>
      auto operator ()(union2 &variant, Args &&...args) const
        -> decltype(
          std::declval<union2 &>().set_ui_2(std::forward<Args>(args)...)
        )
      {
        return variant.set_ui_2(std::forward<Args>(args)...);
      }
    };

    struct ud_2 {
      template <typename... Args>
      auto operator ()(union2 &variant, Args &&...args) const
        -> decltype(
          std::declval<union2 &>().set_ud_2(std::forward<Args>(args)...)
        )
      {
        return variant.set_ud_2(std::forward<Args>(args)...);
      }
    };

    struct us_2 {
      template <typename... Args>
      auto operator ()(union2 &variant, Args &&...args) const
        -> decltype(
          std::declval<union2 &>().set_us_2(std::forward<Args>(args)...)
        )
      {
        return variant.set_us_2(std::forward<Args>(args)...);
      }
    };

    struct ue_2 {
      template <typename... Args>
      auto operator ()(union2 &variant, Args &&...args) const
        -> decltype(
          std::declval<union2 &>().set_ue_2(std::forward<Args>(args)...)
        )
      {
        return variant.set_ue_2(std::forward<Args>(args)...);
      }
    };
  };

  public:
  using type = ::test_cpp2::cpp_reflection::union2;
  using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::union2;
  using id = type::Type;
  using ids = union2__struct_unique_identifiers_list;
  using descriptors = ::fatal::type_list<
    ::fatal::variant_type_descriptor<
      int32_t,
      union2__struct_unique_identifiers_list::ui_2,
      union2__struct_unique_getters_list::ui_2,
      union2__struct_unique_setters_list::ui_2,
      ::apache::thrift::reflected_union_member_metadata<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ui_2,
        1,
        ::apache::thrift::type_class::integral
      >
    >,
    ::fatal::variant_type_descriptor<
      double,
      union2__struct_unique_identifiers_list::ud_2,
      union2__struct_unique_getters_list::ud_2,
      union2__struct_unique_setters_list::ud_2,
      ::apache::thrift::reflected_union_member_metadata<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ud_2,
        2,
        ::apache::thrift::type_class::floating_point
      >
    >,
    ::fatal::variant_type_descriptor<
      std::string,
      union2__struct_unique_identifiers_list::us_2,
      union2__struct_unique_getters_list::us_2,
      union2__struct_unique_setters_list::us_2,
      ::apache::thrift::reflected_union_member_metadata<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::us_2,
        3,
        ::apache::thrift::type_class::string
      >
    >,
    ::fatal::variant_type_descriptor<
       ::test_cpp2::cpp_reflection::enum1,
      union2__struct_unique_identifiers_list::ue_2,
      union2__struct_unique_getters_list::ue_2,
      union2__struct_unique_setters_list::ue_2,
      ::apache::thrift::reflected_union_member_metadata<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ue_2,
        4,
        ::apache::thrift::type_class::enumeration
      >
    >
  >;

  class annotations {
    struct annotations__unique_annotations_keys {};

    struct annotations__unique_annotations_values {};

    public:
    using keys = annotations__unique_annotations_keys;
    using values = annotations__unique_annotations_values;
    using map = ::fatal::type_map<
    >;
  };

  static id get_id(type const &variant) {
    return variant.getType();
  }

  static bool empty(type const &variant) {
    return variant.getType() == id::__EMPTY__;
  }

  static void clear(type &variant) {
    return variant.__clear();
  }
};

} // thrift_fatal_impl_detail
namespace thrift_fatal_impl_detail {

class union3_Type_enum_traits {
  struct Type__struct_unique_strings_list {
    using ui_3 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ui_3;
    using ud_3 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ud_3;
    using us_3 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::us_3;
    using ue_3 = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ue_3;
  };

  public:
  using type = ::test_cpp2::cpp_reflection::union3::Type;
  using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::Type;
  using str = Type__struct_unique_strings_list;
  using name_to_value = ::fatal::type_map<
    ::fatal::type_pair<
      str::ui_3,
      std::integral_constant<type, type::ui_3>
    >,
    ::fatal::type_pair<
      str::ud_3,
      std::integral_constant<type, type::ud_3>
    >,
    ::fatal::type_pair<
      str::us_3,
      std::integral_constant<type, type::us_3>
    >,
    ::fatal::type_pair<
      str::ue_3,
      std::integral_constant<type, type::ue_3>
    >
  >;

  class annotations {
    struct annotations__unique_annotations_keys {};

    struct annotations__unique_annotations_values {};

    public:
    using keys = annotations__unique_annotations_keys;
    using values = annotations__unique_annotations_values;
    using map = ::fatal::type_map<
    >;
  };

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::ui_3: return "ui_3";
      case type::ud_3: return "ud_3";
      case type::us_3: return "us_3";
      case type::ue_3: return "ue_3";
      default: return fallback;
    }
  }
};

} // thrift_fatal_impl_detail

FATAL_REGISTER_ENUM_TRAITS(
  ::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::union3_Type_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::union3_Type_enum_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(0ull)
  >
);

namespace thrift_fatal_impl_detail {

class union3_variant_traits {
  struct union3__struct_unique_identifiers_list {
    using ui_3 = std::integral_constant<::test_cpp2::cpp_reflection::union3::Type, ::test_cpp2::cpp_reflection::union3::Type::ui_3>;
    using ud_3 = std::integral_constant<::test_cpp2::cpp_reflection::union3::Type, ::test_cpp2::cpp_reflection::union3::Type::ud_3>;
    using us_3 = std::integral_constant<::test_cpp2::cpp_reflection::union3::Type, ::test_cpp2::cpp_reflection::union3::Type::us_3>;
    using ue_3 = std::integral_constant<::test_cpp2::cpp_reflection::union3::Type, ::test_cpp2::cpp_reflection::union3::Type::ue_3>;
  };

  struct union3__struct_unique_getters_list {
    struct ui_3 {
      auto operator ()(union3 const &variant) const
        -> decltype(std::declval<union3 const &>().get_ui_3())
      {
        return variant.get_ui_3();
      }

      auto operator ()(union3 &variant) const
        -> decltype(std::declval<union3 &>().mutable_ui_3())
      {
        return variant.mutable_ui_3();
      }

      auto operator ()(union3 &&variant) const
        -> decltype(std::declval<union3 &&>().move_ui_3())
      {
        return std::move(variant).move_ui_3();
      }
    };

    struct ud_3 {
      auto operator ()(union3 const &variant) const
        -> decltype(std::declval<union3 const &>().get_ud_3())
      {
        return variant.get_ud_3();
      }

      auto operator ()(union3 &variant) const
        -> decltype(std::declval<union3 &>().mutable_ud_3())
      {
        return variant.mutable_ud_3();
      }

      auto operator ()(union3 &&variant) const
        -> decltype(std::declval<union3 &&>().move_ud_3())
      {
        return std::move(variant).move_ud_3();
      }
    };

    struct us_3 {
      auto operator ()(union3 const &variant) const
        -> decltype(std::declval<union3 const &>().get_us_3())
      {
        return variant.get_us_3();
      }

      auto operator ()(union3 &variant) const
        -> decltype(std::declval<union3 &>().mutable_us_3())
      {
        return variant.mutable_us_3();
      }

      auto operator ()(union3 &&variant) const
        -> decltype(std::declval<union3 &&>().move_us_3())
      {
        return std::move(variant).move_us_3();
      }
    };

    struct ue_3 {
      auto operator ()(union3 const &variant) const
        -> decltype(std::declval<union3 const &>().get_ue_3())
      {
        return variant.get_ue_3();
      }

      auto operator ()(union3 &variant) const
        -> decltype(std::declval<union3 &>().mutable_ue_3())
      {
        return variant.mutable_ue_3();
      }

      auto operator ()(union3 &&variant) const
        -> decltype(std::declval<union3 &&>().move_ue_3())
      {
        return std::move(variant).move_ue_3();
      }
    };
  };

  struct union3__struct_unique_setters_list {
    struct ui_3 {
      template <typename... Args>
      auto operator ()(union3 &variant, Args &&...args) const
        -> decltype(
          std::declval<union3 &>().set_ui_3(std::forward<Args>(args)...)
        )
      {
        return variant.set_ui_3(std::forward<Args>(args)...);
      }
    };

    struct ud_3 {
      template <typename... Args>
      auto operator ()(union3 &variant, Args &&...args) const
        -> decltype(
          std::declval<union3 &>().set_ud_3(std::forward<Args>(args)...)
        )
      {
        return variant.set_ud_3(std::forward<Args>(args)...);
      }
    };

    struct us_3 {
      template <typename... Args>
      auto operator ()(union3 &variant, Args &&...args) const
        -> decltype(
          std::declval<union3 &>().set_us_3(std::forward<Args>(args)...)
        )
      {
        return variant.set_us_3(std::forward<Args>(args)...);
      }
    };

    struct ue_3 {
      template <typename... Args>
      auto operator ()(union3 &variant, Args &&...args) const
        -> decltype(
          std::declval<union3 &>().set_ue_3(std::forward<Args>(args)...)
        )
      {
        return variant.set_ue_3(std::forward<Args>(args)...);
      }
    };
  };

  public:
  using type = ::test_cpp2::cpp_reflection::union3;
  using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::union3;
  using id = type::Type;
  using ids = union3__struct_unique_identifiers_list;
  using descriptors = ::fatal::type_list<
    ::fatal::variant_type_descriptor<
      int32_t,
      union3__struct_unique_identifiers_list::ui_3,
      union3__struct_unique_getters_list::ui_3,
      union3__struct_unique_setters_list::ui_3,
      ::apache::thrift::reflected_union_member_metadata<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ui_3,
        1,
        ::apache::thrift::type_class::integral
      >
    >,
    ::fatal::variant_type_descriptor<
      double,
      union3__struct_unique_identifiers_list::ud_3,
      union3__struct_unique_getters_list::ud_3,
      union3__struct_unique_setters_list::ud_3,
      ::apache::thrift::reflected_union_member_metadata<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ud_3,
        2,
        ::apache::thrift::type_class::floating_point
      >
    >,
    ::fatal::variant_type_descriptor<
      std::string,
      union3__struct_unique_identifiers_list::us_3,
      union3__struct_unique_getters_list::us_3,
      union3__struct_unique_setters_list::us_3,
      ::apache::thrift::reflected_union_member_metadata<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::us_3,
        3,
        ::apache::thrift::type_class::string
      >
    >,
    ::fatal::variant_type_descriptor<
       ::test_cpp2::cpp_reflection::enum1,
      union3__struct_unique_identifiers_list::ue_3,
      union3__struct_unique_getters_list::ue_3,
      union3__struct_unique_setters_list::ue_3,
      ::apache::thrift::reflected_union_member_metadata<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::ue_3,
        4,
        ::apache::thrift::type_class::enumeration
      >
    >
  >;

  class annotations {
    struct annotations__unique_annotations_keys {};

    struct annotations__unique_annotations_values {};

    public:
    using keys = annotations__unique_annotations_keys;
    using values = annotations__unique_annotations_values;
    using map = ::fatal::type_map<
    >;
  };

  static id get_id(type const &variant) {
    return variant.getType();
  }

  static bool empty(type const &variant) {
    return variant.getType() == id::__EMPTY__;
  }

  static void clear(type &variant) {
    return variant.__clear();
  }
};

} // thrift_fatal_impl_detail
namespace thrift_fatal_impl_detail {

class unionA_Type_enum_traits {
  struct Type__struct_unique_strings_list {
    using i = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::i;
    using d = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::d;
    using s = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::s;
    using e = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::e;
    using a = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::a;
  };

  public:
  using type = ::test_cpp2::cpp_reflection::unionA::Type;
  using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::Type;
  using str = Type__struct_unique_strings_list;
  using name_to_value = ::fatal::type_map<
    ::fatal::type_pair<
      str::i,
      std::integral_constant<type, type::i>
    >,
    ::fatal::type_pair<
      str::d,
      std::integral_constant<type, type::d>
    >,
    ::fatal::type_pair<
      str::s,
      std::integral_constant<type, type::s>
    >,
    ::fatal::type_pair<
      str::e,
      std::integral_constant<type, type::e>
    >,
    ::fatal::type_pair<
      str::a,
      std::integral_constant<type, type::a>
    >
  >;

  class annotations {
    struct annotations__unique_annotations_keys {};

    struct annotations__unique_annotations_values {};

    public:
    using keys = annotations__unique_annotations_keys;
    using values = annotations__unique_annotations_values;
    using map = ::fatal::type_map<
    >;
  };

  static char const *to_string(type e, char const *fallback) {
    switch (e) {
      case type::i: return "i";
      case type::d: return "d";
      case type::s: return "s";
      case type::e: return "e";
      case type::a: return "a";
      default: return fallback;
    }
  }
};

} // thrift_fatal_impl_detail

FATAL_REGISTER_ENUM_TRAITS(
  ::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::unionA_Type_enum_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::unionA_Type_enum_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(0ull)
  >
);

namespace thrift_fatal_impl_detail {

class unionA_variant_traits {
  struct unionA__struct_unique_identifiers_list {
    using i = std::integral_constant<::test_cpp2::cpp_reflection::unionA::Type, ::test_cpp2::cpp_reflection::unionA::Type::i>;
    using d = std::integral_constant<::test_cpp2::cpp_reflection::unionA::Type, ::test_cpp2::cpp_reflection::unionA::Type::d>;
    using s = std::integral_constant<::test_cpp2::cpp_reflection::unionA::Type, ::test_cpp2::cpp_reflection::unionA::Type::s>;
    using e = std::integral_constant<::test_cpp2::cpp_reflection::unionA::Type, ::test_cpp2::cpp_reflection::unionA::Type::e>;
    using a = std::integral_constant<::test_cpp2::cpp_reflection::unionA::Type, ::test_cpp2::cpp_reflection::unionA::Type::a>;
  };

  struct unionA__struct_unique_getters_list {
    struct i {
      auto operator ()(unionA const &variant) const
        -> decltype(std::declval<unionA const &>().get_i())
      {
        return variant.get_i();
      }

      auto operator ()(unionA &variant) const
        -> decltype(std::declval<unionA &>().mutable_i())
      {
        return variant.mutable_i();
      }

      auto operator ()(unionA &&variant) const
        -> decltype(std::declval<unionA &&>().move_i())
      {
        return std::move(variant).move_i();
      }
    };

    struct d {
      auto operator ()(unionA const &variant) const
        -> decltype(std::declval<unionA const &>().get_d())
      {
        return variant.get_d();
      }

      auto operator ()(unionA &variant) const
        -> decltype(std::declval<unionA &>().mutable_d())
      {
        return variant.mutable_d();
      }

      auto operator ()(unionA &&variant) const
        -> decltype(std::declval<unionA &&>().move_d())
      {
        return std::move(variant).move_d();
      }
    };

    struct s {
      auto operator ()(unionA const &variant) const
        -> decltype(std::declval<unionA const &>().get_s())
      {
        return variant.get_s();
      }

      auto operator ()(unionA &variant) const
        -> decltype(std::declval<unionA &>().mutable_s())
      {
        return variant.mutable_s();
      }

      auto operator ()(unionA &&variant) const
        -> decltype(std::declval<unionA &&>().move_s())
      {
        return std::move(variant).move_s();
      }
    };

    struct e {
      auto operator ()(unionA const &variant) const
        -> decltype(std::declval<unionA const &>().get_e())
      {
        return variant.get_e();
      }

      auto operator ()(unionA &variant) const
        -> decltype(std::declval<unionA &>().mutable_e())
      {
        return variant.mutable_e();
      }

      auto operator ()(unionA &&variant) const
        -> decltype(std::declval<unionA &&>().move_e())
      {
        return std::move(variant).move_e();
      }
    };

    struct a {
      auto operator ()(unionA const &variant) const
        -> decltype(std::declval<unionA const &>().get_a())
      {
        return variant.get_a();
      }

      auto operator ()(unionA &variant) const
        -> decltype(std::declval<unionA &>().mutable_a())
      {
        return variant.mutable_a();
      }

      auto operator ()(unionA &&variant) const
        -> decltype(std::declval<unionA &&>().move_a())
      {
        return std::move(variant).move_a();
      }
    };
  };

  struct unionA__struct_unique_setters_list {
    struct i {
      template <typename... Args>
      auto operator ()(unionA &variant, Args &&...args) const
        -> decltype(
          std::declval<unionA &>().set_i(std::forward<Args>(args)...)
        )
      {
        return variant.set_i(std::forward<Args>(args)...);
      }
    };

    struct d {
      template <typename... Args>
      auto operator ()(unionA &variant, Args &&...args) const
        -> decltype(
          std::declval<unionA &>().set_d(std::forward<Args>(args)...)
        )
      {
        return variant.set_d(std::forward<Args>(args)...);
      }
    };

    struct s {
      template <typename... Args>
      auto operator ()(unionA &variant, Args &&...args) const
        -> decltype(
          std::declval<unionA &>().set_s(std::forward<Args>(args)...)
        )
      {
        return variant.set_s(std::forward<Args>(args)...);
      }
    };

    struct e {
      template <typename... Args>
      auto operator ()(unionA &variant, Args &&...args) const
        -> decltype(
          std::declval<unionA &>().set_e(std::forward<Args>(args)...)
        )
      {
        return variant.set_e(std::forward<Args>(args)...);
      }
    };

    struct a {
      template <typename... Args>
      auto operator ()(unionA &variant, Args &&...args) const
        -> decltype(
          std::declval<unionA &>().set_a(std::forward<Args>(args)...)
        )
      {
        return variant.set_a(std::forward<Args>(args)...);
      }
    };
  };

  public:
  using type = ::test_cpp2::cpp_reflection::unionA;
  using name = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::unionA;
  using id = type::Type;
  using ids = unionA__struct_unique_identifiers_list;
  using descriptors = ::fatal::type_list<
    ::fatal::variant_type_descriptor<
      int32_t,
      unionA__struct_unique_identifiers_list::i,
      unionA__struct_unique_getters_list::i,
      unionA__struct_unique_setters_list::i,
      ::apache::thrift::reflected_union_member_metadata<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::i,
        1,
        ::apache::thrift::type_class::integral
      >
    >,
    ::fatal::variant_type_descriptor<
      double,
      unionA__struct_unique_identifiers_list::d,
      unionA__struct_unique_getters_list::d,
      unionA__struct_unique_setters_list::d,
      ::apache::thrift::reflected_union_member_metadata<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::d,
        2,
        ::apache::thrift::type_class::floating_point
      >
    >,
    ::fatal::variant_type_descriptor<
      std::string,
      unionA__struct_unique_identifiers_list::s,
      unionA__struct_unique_getters_list::s,
      unionA__struct_unique_setters_list::s,
      ::apache::thrift::reflected_union_member_metadata<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::s,
        3,
        ::apache::thrift::type_class::string
      >
    >,
    ::fatal::variant_type_descriptor<
       ::test_cpp2::cpp_reflection::enum1,
      unionA__struct_unique_identifiers_list::e,
      unionA__struct_unique_getters_list::e,
      unionA__struct_unique_setters_list::e,
      ::apache::thrift::reflected_union_member_metadata<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::e,
        4,
        ::apache::thrift::type_class::enumeration
      >
    >,
    ::fatal::variant_type_descriptor<
       ::test_cpp2::cpp_reflection::structA,
      unionA__struct_unique_identifiers_list::a,
      unionA__struct_unique_getters_list::a,
      unionA__struct_unique_setters_list::a,
      ::apache::thrift::reflected_union_member_metadata<
        thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::a,
        5,
        ::apache::thrift::type_class::structure
      >
    >
  >;

  class annotations {
    struct annotations__unique_annotations_keys {
      using another_annotation = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::another_annotation;
      using sample_annotation = thrift_fatal_impl_detail::test_cpp2_cpp_reflection_module__unique_strings_list::sample_annotation;
    };

    struct annotations__unique_annotations_values {
      using another_annotation = ::fatal::constant_sequence<char, 's', 'o', 'm', 'e', ' ', 'm', 'o', 'r', 'e', ' ', 't', 'e', 'x', 't'>;
      using sample_annotation = ::fatal::constant_sequence<char, 's', 'o', 'm', 'e', ' ', 't', 'e', 'x', 't', ' ', 'h', 'e', 'r', 'e'>;
    };

    public:
    using keys = annotations__unique_annotations_keys;
    using values = annotations__unique_annotations_values;
    using map = ::fatal::type_map<
      ::fatal::type_pair<
        keys::another_annotation,
        values::another_annotation
      >,
      ::fatal::type_pair<
        keys::sample_annotation,
        values::sample_annotation
      >
    >;
  };

  static id get_id(type const &variant) {
    return variant.getType();
  }

  static bool empty(type const &variant) {
    return variant.getType() == id::__EMPTY__;
  }

  static void clear(type &variant) {
    return variant.__clear();
  }
};

} // thrift_fatal_impl_detail

FATAL_REGISTER_VARIANT_TRAITS(
  ::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::union1_variant_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::union1_variant_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(7384876196182105420ull)
  >
);
FATAL_REGISTER_VARIANT_TRAITS(
  ::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::union2_variant_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::union2_variant_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(16722894251049030828ull)
  >
);
FATAL_REGISTER_VARIANT_TRAITS(
  ::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::union3_variant_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::union3_variant_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(12878995471701578764ull)
  >
);
FATAL_REGISTER_VARIANT_TRAITS(
  ::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::unionA_variant_traits,
  ::apache::thrift::detail::type_common_metadata_impl<
    module_tags::module,
    ::apache::thrift::reflected_annotations<::test_cpp2::cpp_reflection::thrift_fatal_impl_detail::unionA_variant_traits::annotations>,
    static_cast<::apache::thrift::legacy_type_id_t>(7943717058393504940ull)
  >
);

}} // test_cpp2::cpp_reflection