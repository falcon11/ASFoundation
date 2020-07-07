#
# Be sure to run `pod lib lint ASFoundation.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'IWCFoundation'
  s.version          = '0.0.7'
  s.summary          = 'A pod contains common use third party pods and tool classes'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
Objective-C iOS project common use third party pods and classes
                       DESC

  s.homepage         = 'http://gitlab.iwhalecloud.com/hunan-ztf/ios/iwcfoundation.git'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zheng.hanji' => 'zheng.hanji@iwhalecloud.com' }
  s.source           = { :git => 'http://gitlab.iwhalecloud.com/hunan-ztf/ios/iwcfoundation.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  s.source_files = 'ASFoundation/Classes/**/*'
  
  # s.resource_bundles = {
  #   'ASFoundation' => ['ASFoundation/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  s.frameworks = 'UIKit', 'Foundation'
  s.dependency 'AFNetworking', '~> 4.0.1'
  s.dependency 'SDWebImage', '~> 5.8.1'
  s.dependency 'Masonry', '~> 1.1.0'
  s.dependency 'JKCategories', '~> 1.9'
  s.dependency 'ReactiveObjC', '~> 3.1.1'
  s.dependency 'MJExtension', '~> 3.2.1'
  s.dependency 'CocoaLumberjack', '~> 3.6.1'
  s.dependency 'MJRefresh', '~> 3.4.3'
  s.dependency 'CTMediator', '~> 32'
  s.dependency 'MBProgressHUD', '~> 1.2.0'
end
