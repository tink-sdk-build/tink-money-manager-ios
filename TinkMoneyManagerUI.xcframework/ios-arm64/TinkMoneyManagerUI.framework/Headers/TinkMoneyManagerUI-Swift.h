// Generated by Apple Swift version 5.4.2 (swiftlang-1205.0.28.2 clang-1205.0.19.57)
#ifndef TINKMONEYMANAGERUI_SWIFT_H
#define TINKMONEYMANAGERUI_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="TinkMoneyManagerUI",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSCoder;
@class NSString;
@class NSBundle;

/// A view controller that displays balance and transactions for a specific account.
/// Required scopes: <code>accounts:read</code>, <code>categories:read</code>, <code>transactions:read</code>, <code>transactions:categorize</code> and <code>user:read</code>.
/// Use the <code>AccountDetailsViewController</code> when you want to display information and transactions about one of the user’s accounts.
/// When creating the view controller, you specify the ID for which account to display.
/// \code
/// let accountDetailsViewController = AccountDetailsViewController(tink: <#Tink#>, accountID: <#Account.ID#>)
/// show(accountDetailsViewController, sender: <#Any#>)
///
/// \endcode
SWIFT_CLASS("_TtC18TinkMoneyManagerUI28AccountDetailsViewController")
@interface AccountDetailsViewController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@class UIPresentationController;

@interface AccountDetailsViewController (SWIFT_EXTENSION(TinkMoneyManagerUI)) <UIAdaptivePresentationControllerDelegate>
- (void)presentationControllerWillDismiss:(UIPresentationController * _Nonnull)presentationController;
@end


@class NSNumber;

@interface AccountDetailsViewController (SWIFT_EXTENSION(TinkMoneyManagerUI))
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
@end



/// A <code>AccountsViewController</code> displays a list of accounts.
/// This view controller is designed to be used in a <code>UINavigationController</code> but can be used standalone also.
/// \code
/// let accountsViewController = AccountsViewController(tink: <#Tink#>)
/// show(accountsViewController, sender: <#Any#>)
///
/// \endcode<h2>Configuration options</h2>
/// The <code>configuration</code> allows the Account fields in edit screen to be customized in more detail.
/// <ul>
///   <li>
///     Use the <code>transactionItemAction</code> to configure the view to present when tapping on a transaction item row.
///   </li>
///   <li>
///     Use the <code>accountEditableField</code> to configure which fields should be editable in the edit form.
///   </li>
/// </ul>
/// <h2>Responding to User Selection</h2>
/// <code>AccountsViewController</code> clears its selection every time an account being selected and a detail view is presented in response.
/// If you present a modal in response to a account selection you might need to deselect the transaction. To do that you can call the <code>clearSelection(animated:)</code> method.
/// \code
/// accountsViewController.clearSelection(animated: true)
///
/// \endcode
SWIFT_CLASS("_TtC18TinkMoneyManagerUI22AccountsViewController")
@interface AccountsViewController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end



@interface AccountsViewController (SWIFT_EXTENSION(TinkMoneyManagerUI)) <UIAdaptivePresentationControllerDelegate>
- (void)presentationControllerWillDismiss:(UIPresentationController * _Nonnull)presentationController;
@end



/// A view controller that displays a list actionable insights.
/// Use the <code>ActionableInsightListViewController</code> to display an interface with actionable insights.
/// This view controller is designed to be used in a <code>UINavigationController</code> but can be used standalone also.
/// \code
/// let actionableInsightsViewController = ActionableInsightListViewController(tink: <#Tink#>, delegate: <#delegateInstance#>)
/// show(actionableInsightsViewController, sender: <#Any#>)
///
/// \endcode<h2>Responding to User Actions</h2>
/// Implement the methods of the  <code>ActionableInsightsViewControllerDelegate</code> to respond to user actions related to insights.
/// For methods that has a <code>completionHandler</code> parameter you have to call that handler when the task related to the requested action has completed or been cancelled.
/// If you don’t call the handler the insight will remain in the list and not be archived.
/// \code
/// extension <#Class#>: ActionableInsightsViewControllerDelegate {
///     func actionableInsightsViewController(_ viewController: ActionableInsightListViewController, showBudget id: Budget.ID, budgetPeriodStart: Date) {
///         <#code#>
///     }
///
///     func actionableInsightsViewController(_ viewController: ActionableInsightListViewController, initiateTransferFromAccount source: URL?, to destination: URL?, amount: Double?, currencyCode: String?, completionHandler: @escaping (Result<Void, Error>) -> Void) {
///         <#code#>
///     }
///
///     func actionableInsightsViewController(_ viewController: ActionableInsightListViewController, showTransactionWithID id: Transaction.ID) {
///         <#code#>
///     }
/// }
///
/// \endcodenote:
/// You need to implement a delegate conforming to <code>ActionableInsightsViewControllerDelegate</code> to use this view controller.
SWIFT_CLASS("_TtC18TinkMoneyManagerUI32ActionableInsightsViewController")
@interface ActionableInsightsViewController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end



@interface ActionableInsightsViewController (SWIFT_EXTENSION(TinkMoneyManagerUI)) <UIAdaptivePresentationControllerDelegate>
- (void)presentationControllerWillDismiss:(UIPresentationController * _Nonnull)presentationController;
@end



@class UICollectionView;
@class NSIndexPath;
@class UICollectionViewCell;

@interface ActionableInsightsViewController (SWIFT_EXTENSION(TinkMoneyManagerUI)) <UICollectionViewDataSource>
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end



@class UITraitCollection;

@interface ActionableInsightsViewController (SWIFT_EXTENSION(TinkMoneyManagerUI))
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)animated;
- (void)traitCollectionDidChange:(UITraitCollection * _Nullable)previousTraitCollection;
@end


/// A view controller that displays details of a budget.
/// Use the <code>BudgetDetailsViewController</code> when you want to display details and related transactions about a budget.
/// Required scopes: <code>budgets:write</code>, <code>budgets:read</code>, <code>categories:read</code>, <code>transactions:read</code>, <code>transactions:categorize</code> and <code>user:read</code>.
/// This view controller is designed to be used in a <code>UINavigationController</code> but can be used standalone as well.
/// When creating the view controller, specify the ID for which budget to display.
/// \code
/// let budgetDetailsViewController = BudgetDetailsViewController(budgetID: <#Budget.ID#>)
/// show(budgetDetailsViewController, sender: <#Any#>)
///
/// \endcode
SWIFT_CLASS("_TtC18TinkMoneyManagerUI27BudgetDetailsViewController")
@interface BudgetDetailsViewController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end



@interface BudgetDetailsViewController (SWIFT_EXTENSION(TinkMoneyManagerUI))
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
@end






/// A view controller for categorizing a transaction.
/// Required scopes: <code>categories:read</code>, <code>transactions:read</code>, <code>transactions:categorize</code> and <code>user:read</code>.
/// A <code>CategorizeTransactionViewController</code> displays an interface for picking a category to recategorize a transaction as.
/// After picking a category it can also display similar transactions which the user can select to also recategorize.
/// note:
/// This view controller is designed to be presented modally.
/// <h2>Overview</h2>
/// Provide the id of the transaction you want to categorize and which category types you want the user to choose categories from.
/// For example, if the transaction has a negative amount you might only want to allow the transaction to be recategorized as an expense or transfer category.
/// \code
/// let categorizeTransactionViewController = CategorizeTransactionViewController(
///     tink: <#Tink#>,
///     transactionID: <#Transaction.ID#>,
///     categoryTypes: [<#Category.Kind#>]
/// )
///
/// \endcode<h2>Dismissing the Categorization Interface</h2>
/// This view controller is designed to be presented modally. To handle what should happen after the transaction has been categorized or if the user taps Cancel, you need to implement the <code>CategorizeTransactionViewControllerDelegate</code>. By default the view controller will dismiss itself when the user taps Cancel but you might also want to customize what should happen when the transaction was categorized or if an error occured.
/// \code
/// categorizeTransactionViewController.delegate = <#delegateInstance#>
/// present(categorizeTransactionViewController, animated: true)
///
/// \endcode\code
/// extension <#Class#>: CategorizeTransactionViewControllerDelegate {
///     func categorizeTransactionViewController(_ controller: CategorizeTransactionViewController, didCategorize transactions: [Transaction.ID], category: Category) {
///         dismiss(animated: true)
///     }
///
///     func categorizeTransactionViewController(_ controller: CategorizeTransactionViewController, didFailWithError error: Error) {
///         <#Error handling#>
///     }
///
///     func categorizeTransactionViewControllerDidCancel(_ controller: CategorizeTransactionViewController) {
///         dismiss(animated: true)
///     }
/// }
///
/// \endcode
SWIFT_CLASS("_TtC18TinkMoneyManagerUI35CategorizeTransactionViewController")
@interface CategorizeTransactionViewController : UINavigationController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end




@interface CategorizeTransactionViewController (SWIFT_EXTENSION(TinkMoneyManagerUI))
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
@end



@protocol UIViewControllerAnimatedTransitioning;
@protocol UIViewControllerInteractiveTransitioning;

SWIFT_CLASS("_TtC18TinkMoneyManagerUI46CategoryStatisticsNavigationControllerDelegate")
@interface CategoryStatisticsNavigationControllerDelegate : NSObject <UINavigationControllerDelegate>
- (void)navigationController:(UINavigationController * _Nonnull)navigationController willShowViewController:(UIViewController * _Nonnull)viewController animated:(BOOL)animated;
- (void)navigationController:(UINavigationController * _Nonnull)navigationController didShowViewController:(UIViewController * _Nonnull)viewController animated:(BOOL)animated;
- (UIInterfaceOrientationMask)navigationControllerSupportedInterfaceOrientations:(UINavigationController * _Nonnull)navigationController SWIFT_WARN_UNUSED_RESULT;
- (UIInterfaceOrientation)navigationControllerPreferredInterfaceOrientationForPresentation:(UINavigationController * _Nonnull)navigationController SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerInteractiveTransitioning> _Nullable)navigationController:(UINavigationController * _Nonnull)navigationController interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning> _Nonnull)animationController SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerAnimatedTransitioning> _Nullable)navigationController:(UINavigationController * _Nonnull)navigationController animationControllerForOperation:(UINavigationControllerOperation)operation fromViewController:(UIViewController * _Nonnull)fromVC toViewController:(UIViewController * _Nonnull)toVC SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A view controller for displaying statistics for categories.
/// Required scopes: <code>statistics:read</code>, <code>transactions:read</code>, <code>transactions:categorize</code>, <code>categories:read</code>, <code>calendar:read</code> and <code>user:read</code>.
/// A <code>CategoryStatisticsViewController</code> displays an interface for browsing combined sum of categories by month.
/// <h2>Overview</h2>
/// Creating a statistics view requires you to provide which type of categories to display statistics for.
/// \code
/// let categoryStatisticsViewController = CategoryStatisticsViewController(tink: <#Tink#>, categoryType: <#Category.Kind#>)
/// present(categoryStatisticsViewController, animated: true)
///
/// \endcodeThe <code>CategoryStatisticsViewController</code> manages it’s own <code>UINavigationController</code> for navigating between subcategories and transaction lists.
/// It’s designed to be presented modally or in a tab but cannot be pushed into a <code>UINavigationController</code>.
SWIFT_CLASS("_TtC18TinkMoneyManagerUI32CategoryStatisticsViewController")
@interface CategoryStatisticsViewController : UINavigationController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@interface CategoryStatisticsViewController (SWIFT_EXTENSION(TinkMoneyManagerUI))
- (void)viewDidLoad;
@end

@class UIGestureRecognizer;

@interface CategoryStatisticsViewController (SWIFT_EXTENSION(TinkMoneyManagerUI)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end


/// A view controller that can be used to create a budget.
/// Use the <code>CreateBudgetViewController</code> when you want to create a budget.
/// Required scopes: <code>budgets:write</code>, <code>budgets:read</code>.
/// To handle what should happen after the budget has been created or if it failed, check the result from the <code>completion</code> closure.
/// note:
/// This view controller is designed to be presented modally.
/// \code
/// let createBudgetViewController = CreateBudgetViewController()  { [weak self] result in
///     DispatchQueue.main.async {
///         do {
///             let budget = try result.get()
///             <#code#>
///         } catch {
///             <#error#>
///         }
///     }
/// }
/// present(createBudgetViewController, animated: true)
///
/// \endcode
SWIFT_CLASS("_TtC18TinkMoneyManagerUI26CreateBudgetViewController")
@interface CreateBudgetViewController : UINavigationController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end



/// A view controller that can be used to edit an account.
/// Required scopes: <code>accounts:write</code>, <code>accounts:read</code>.
/// note:
/// This view controller is designed to be presented modally.
/// When creating the view controller, specify the ID for which account to edit.
/// \code
/// let editAccountViewController = EditAccountViewController(accountID: <#Account.ID#>)
/// present(editAccountViewController, animated: true)
///
/// \endcode
SWIFT_CLASS("_TtC18TinkMoneyManagerUI25EditAccountViewController")
@interface EditAccountViewController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

@class UIPickerView;

@interface EditAccountViewController (SWIFT_EXTENSION(TinkMoneyManagerUI)) <UIPickerViewDataSource>
- (NSInteger)pickerView:(UIPickerView * _Nonnull)pickerView numberOfRowsInComponent:(NSInteger)component SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)numberOfComponentsInPickerView:(UIPickerView * _Nonnull)pickerView SWIFT_WARN_UNUSED_RESULT;
@end


@class NSAttributedString;

@interface EditAccountViewController (SWIFT_EXTENSION(TinkMoneyManagerUI)) <UIPickerViewDelegate>
- (NSString * _Nullable)pickerView:(UIPickerView * _Nonnull)pickerView titleForRow:(NSInteger)row forComponent:(NSInteger)component SWIFT_WARN_UNUSED_RESULT;
- (void)pickerView:(UIPickerView * _Nonnull)pickerView didSelectRow:(NSInteger)row inComponent:(NSInteger)component;
- (NSAttributedString * _Nullable)pickerView:(UIPickerView * _Nonnull)pickerView attributedTitleForRow:(NSInteger)row forComponent:(NSInteger)component SWIFT_WARN_UNUSED_RESULT;
@end

@class UITextField;

@interface EditAccountViewController (SWIFT_EXTENSION(TinkMoneyManagerUI)) <UITextFieldDelegate>
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
@end

@class UITableView;
@class UITableViewCell;

@interface EditAccountViewController (SWIFT_EXTENSION(TinkMoneyManagerUI)) <UITableViewDataSource, UITableViewDelegate>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


/// A view controller that can be used to edit a budget.
/// Use the <code>EditBudgetViewController</code> when you want to let the user either update the name, amount and period of the budget or delete the budget.
/// Required scopes: <code>budgets:write</code>, <code>budgets:read</code>.
/// note:
/// This view controller is designed to be presented modally.
/// When creating the view controller, specify the ID for which budget to edit.
/// \code
/// let editBudgetViewController = EditBudgetViewController(budgetID: <#Budget.ID#>)
/// present(editBudgetViewController, animated: true)
///
/// \endcode
SWIFT_CLASS("_TtC18TinkMoneyManagerUI24EditBudgetViewController")
@interface EditBudgetViewController : UINavigationController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end



/// A view controller that you can use to edit a transaction.
/// Required scopes: <code>transactions:categorize</code>, <code>categories:read</code> and <code>user:read</code>.
/// <h2>Overview</h2>
/// Use the <code>EditTransactionViewController</code> when you want let the user to edit a transaction.
/// note:
/// It is suitable for use in a <code>UINavigationController</code>.
/// \code
/// let transactionsViewController = EditTransactionViewController(transaction: <#Transaction#>)
/// let navigationController = UINavigationController(rootViewController: transactionsViewController)
/// show(navigationController, sender: <#Any#>)
///
/// \endcode
SWIFT_CLASS("_TtC18TinkMoneyManagerUI29EditTransactionViewController")
@interface EditTransactionViewController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)loadView;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(UITraitCollection * _Nullable)previousTraitCollection;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end



@interface EditTransactionViewController (SWIFT_EXTENSION(TinkMoneyManagerUI)) <UIAdaptivePresentationControllerDelegate>
- (void)presentationControllerDidAttemptToDismiss:(UIPresentationController * _Nonnull)presentationController;
@end


/// A view controller for displaying an overview of a user’s finances.
/// A <code>FinanceOverviewViewController</code> displays an interface with sections of cards and graphs representing the user’s latest data.
/// note:
/// It is suitable for use in a <code>UINavigationController</code>.
SWIFT_CLASS("_TtC18TinkMoneyManagerUI29FinanceOverviewViewController")
@interface FinanceOverviewViewController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end




@interface FinanceOverviewViewController (SWIFT_EXTENSION(TinkMoneyManagerUI)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end

@class UIScrollView;

@interface FinanceOverviewViewController (SWIFT_EXTENSION(TinkMoneyManagerUI)) <UIScrollViewDelegate>
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
@end





@interface FinanceOverviewViewController (SWIFT_EXTENSION(TinkMoneyManagerUI))
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
@end



/// A <code>ImproveCategorizationLevelViewController</code> displays a cluster of transactions that are either uncategorized or have a low categorization score and lets the user categorize these in a few simple steps.
/// This view controller is designed to be used in a <code>UINavigationController</code> but can be used standalone also.
/// \code
/// let improveCategorizationLevelViewController = ImproveCategorizationLevelViewController(tink: <#Tink#>, transactions: <#[Transaction]#>)
/// let navigationController = UINavigationController(rootViewController: improveCategorizationLevelViewController)
/// show(navigationController, sender: <#Any#>)
///
/// \endcode
SWIFT_CLASS("_TtC18TinkMoneyManagerUI40ImproveCategorizationLevelViewController")
@interface ImproveCategorizationLevelViewController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end



/// A view controller for displaying left to spend details.
/// Required scopes: <code>statistics:read</code>, <code>transactions:read</code>, <code>transactions:categorize</code>, <code>categories:read</code>, <code>calendar:read</code> and <code>user:read</code>.
/// A <code>LeftToSpendViewController</code> displays an interface for browsing left to spend by month.
/// <h2>Overview</h2>
/// \code
/// let leftToSpendViewController = LeftToSpendViewController(tink: <#Tink#>)
/// present(leftToSpendViewController, animated: true)
///
/// \endcodeThe <code>LeftToSpendViewController</code> has a right navigation item that navigates to the transactions list, but it does not manage navigation to the transactions list.
/// Push the <code>LeftToSpendViewController</code> into a <code>UINavigationController</code> to show the transactions navigation item.
SWIFT_CLASS("_TtC18TinkMoneyManagerUI25LeftToSpendViewController")
@interface LeftToSpendViewController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@interface LeftToSpendViewController (SWIFT_EXTENSION(TinkMoneyManagerUI))
- (void)viewDidLoad;
@end


@interface LeftToSpendViewController (SWIFT_EXTENSION(TinkMoneyManagerUI)) <UIAdaptivePresentationControllerDelegate>
- (void)presentationControllerWillDismiss:(UIPresentationController * _Nonnull)presentationController;
@end






/// A view controller that displays details about a specific transaction.
/// Use the <code>TransactionDetailsViewController</code> when you want to display information about a particular transaction. From this view controller, the user can also categorize or edit the transaction.
/// When creating the view controller, you specify the ID for which transaction to display.
/// \code
/// let transactionDetailsViewController = TransactionDetailsViewController(transactionID: <#T##Transaction.ID#>)
/// show(transactionDetailsViewController, sender: <#Any#>)
///
/// \endcodenote:
/// Required scopes:
/// <ul>
///   <li>
///     <code>categories:read</code>
///   </li>
///   <li>
///     <code>transactions:read</code>
///   </li>
///   <li>
///     <code>transactions:write</code>
///   </li>
///   <li>
///     <code>transactions:categorize</code>.
///   </li>
/// </ul>
SWIFT_CLASS("_TtC18TinkMoneyManagerUI32TransactionDetailsViewController")
@interface TransactionDetailsViewController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@interface TransactionDetailsViewController (SWIFT_EXTENSION(TinkMoneyManagerUI)) <UIAdaptivePresentationControllerDelegate>
- (void)presentationControllerWillDismiss:(UIPresentationController * _Nonnull)presentationController;
@end



@interface TransactionDetailsViewController (SWIFT_EXTENSION(TinkMoneyManagerUI)) <UITableViewDelegate>
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
@end


@interface TransactionDetailsViewController (SWIFT_EXTENSION(TinkMoneyManagerUI)) <UITableViewDataSource>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


/// A view controller that displays a list of transactions.
/// Required scopes: <code>transactions:write</code>, <code>transactions:read</code>, <code>categories:read</code> and <code>user:read</code>.
/// <h2>Overview</h2>
/// Use the <code>TransactionsViewController</code> when you want to display a list of transactions and let the user select one of them.
/// \code
/// let transactionsViewController = TransactionsViewController(tink: <#Tink#>)
/// show(transactionsViewController, sender: <#Any#>)
///
/// \endcode<h2>Responding to User Selection</h2>
/// To respond to the selection of a transaction you must provide a delegate that conforms to the <code>TransactionsViewControllerDelegate</code>.
/// \code
/// extension <#Class#>: TransactionsViewControllerDelegate {
///     func transactionsViewController(_ viewController: TransactionsViewController, didSelectTransaction transaction: Transaction) {
///         <#code#>
///     }
/// }
///
/// \endcode<code>TransactionsViewController</code> clears its selection every time the list is displayed, so if you pushed a detail view controller in response to a transaction being selected the transaction will be deselected when the user goes back to the transaction list.
/// If you present a modal in response to a transaction selection you might need to deselect the transaction when the modal is dismissed depending on the presentation style. To do that you can call the <code>clearSelection(animated:)</code> method.
/// \code
/// transactionsViewController.clearSelection(animated: true)
///
/// \endcode
SWIFT_CLASS("_TtC18TinkMoneyManagerUI26TransactionsViewController")
@interface TransactionsViewController : UIViewController
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end




@class UIView;

@interface TransactionsViewController (SWIFT_EXTENSION(TinkMoneyManagerUI)) <UITableViewDelegate>
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForHeaderInSection:(NSInteger)sectionIndex SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end





@interface TransactionsViewController (SWIFT_EXTENSION(TinkMoneyManagerUI))
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
@end

















#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
